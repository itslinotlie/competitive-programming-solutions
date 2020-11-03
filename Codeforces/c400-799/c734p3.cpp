// 10/23/2020
// https://codeforces.com/contest/734/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 2e5+5;

ll n, m, k, x, s, a[mxn], b[mxn], c[mxn], d[mxn];
ll fun(ll monie) {
    int l = 0, r = k;
    while(l<=r) {
        int m = r-(r-l)/2;
        if(d[m]<=monie) l=m+1;
        else r=m-1;
    }
    return c[r];
}
int main() {
    //cost = a[i] * (n - c[j])
    cin >> n >> m >> k >> x >> s;
    FOR(i, m) cin >> a[i]; a[0] = x;
    FOR(i, m) cin >> b[i];
    FOR(i, k) cin >> c[i];
    FOR(i, k) cin >> d[i];
    ll ans = n*x;
    for (int i=0;i<=m;i++) {
        ll monie = s-b[i];
        if(monie<0) continue;
        ans = min(ans, a[i]*(n-fun(monie)));
    }
    cout << ans << "\n";
}