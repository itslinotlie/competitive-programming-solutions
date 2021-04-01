// 02/09/2021
// https://codeforces.com/contest/1469/problem/B
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
const int mxn = 1e2+2;

int t(1), n, m, r[mxn], b[mxn], dp[mxn][mxn], ans;
void solve() {
    CLR(r); CLR(b); ans = 0;
    cin >> n;
    FOR(i, n) cin >> r[i], r[i]+=r[i-1];
    cin >> m;
    FOR(i, m) cin >> b[i], b[i]+=b[i-1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            ans = max(ans, r[i]+b[j]);
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}