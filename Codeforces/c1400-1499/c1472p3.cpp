// 02/03/2021
// https://codeforces.com/contest/1472/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
const int mxn = 2e5+5;
int t(1), n; ll a[mxn], dp[mxn], ans;
ll fun(ll x) {
    if(x>n) return 0;
    else if(dp[x]!=0) return dp[x];
    else return dp[x] = a[x] + fun(x+a[x]);
}
void solve() {
    cin >> n; CLR(a); CLR(dp); ans = 0;
    FOR(i, n) cin >> a[i];
    FOR(i, n) ans = max(ans, fun(i));
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}