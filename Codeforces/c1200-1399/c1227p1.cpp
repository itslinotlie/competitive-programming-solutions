// 10/12/2020
// https://codeforces.com/contest/1227/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mxn = 1e5+5;

int t, n, ans, lo, hi; pii a[mxn];
int main() {
    cin >> t;
    while(t--) {
        cin >> n; ans = lo = 0x3f3f3f3f; hi = 0;
        for (int i=1,x,y;i<=n;i++) {
            cin >> x >> y;
            a[i] = {x, y};
        }
        sort(a+1, a+1+n);
        for (int i=1;i<=n;i++) {
            lo = min(lo, a[i].s);
            hi = max(hi, a[i].f);
        }
        if(n==1) cout << 0 << endl;
        else cout << max(0, hi-lo) << endl;
    }
}