// 10/12/2020
// https://codeforces.com/contest/155/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mxn = 1e3+5;

int n, cnt(1), ans, idx(1); pii a[mxn];
bool cmp (pii x, pii y) {
    if(x.s==y.s) return x.f>y.f;
    return x.s>y.s;
}
int main() {
    cin >> n;
    for (int i=1,x,y;i<=n;i++) {
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a+1, a+1+n, cmp);
    while(cnt>0) {
        if(idx>n) break;    
       ans+=a[idx].f;
       cnt+=a[idx++].s-1;
    }
    cout << ans << "\n";
}