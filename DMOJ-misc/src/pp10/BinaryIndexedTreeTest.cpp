// 09/07/2020
// https://dmoj.ca/problem/ds1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;
typedef long long ll;

int n, m; ll l, r, a[mxn], bit[mxn], frq[mxn]; char c;
void update(int idx, ll x, ll tree[]) {
    while(idx<=mxn) {
        tree[idx]+=x;
        idx+=(idx&-idx);
    }
}
ll query(int idx, ll tree[]) {
    ll x = 0;
    while(idx>0) {
        x+=tree[idx];
        idx-=(idx&-idx);
    }
    return x;
}
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        update(i, a[i], bit);
        update(a[i], 1, frq);
    }
    for (int i=1;i<=m;i++) {
        cin >> c >> l;
        if(c!='Q') cin >> r;
        if(c=='C') {
            update(a[l], -1, frq);
            update(r, 1, frq);
            update(l, r-a[l], bit);
            a[l] = r;
        } else if(c=='S') {
            cout << query(r, bit) - query(l-1, bit) << "\n";
        } else if(c=='Q') {
            cout << query(l, frq) << "\n";
        }
    }
}