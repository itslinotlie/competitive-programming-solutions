// 09/14/2020
// https://dmoj.ca/problem/cheasy
#include<bits/stdc++.h>
using namespace std;
const int mxn = 3e3+5;
typedef long long ll;

int n, m, r, c, x, y; ll e[mxn][mxn], o[mxn][mxn];
void update(int yy, int xx, ll val, ll tree[][mxn]) {
    for (int i=yy;i<=mxn;i+=i&-i) {
        for (int j=xx;j<=mxn;j+=j&-j) {
            tree[i][j]+=val;
        }
    }
}
ll query(int yy, int xx, ll tree[][mxn]) {
    ll sum = 0;
    for (int i=yy;i>0;i-=i&-i) {
        for (int j=xx;j>0;j-=j&-j) {
            sum+=tree[i][j];
        }
    }
    return sum;
}
ll query(int rr, int cc, int yy, int xx) {
    ll even = query(yy, xx, e) - query(yy, cc-1, e) - query(rr-1, xx, e) + query(rr-1, cc-1, e);
    ll odd = query(yy, xx, o) - query(yy, cc-1, o) - query(rr-1, xx, o) + query(rr-1, cc-1, o);
    return (rr+cc)%2? odd-even:even-odd;
}
int main() {
    scanf("%d%d", &m, &n);
    for(;;){
        scanf("%d%d%d", &r, &c, &x);
        if(!r && !c && !x) break; 
        if((r+c)%2) update(r, c, x, o);
        else update(r, c, x, e);
    }
    for(;;){
        scanf("%d%d%d%d", &r, &c, &x, &y);
        if(!r && !c && !x && !y) break;
        printf("%lld\n", query(r, c, x, y));
    }
}