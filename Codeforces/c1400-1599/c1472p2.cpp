// 02/03/2021
// https://codeforces.com/contest/1472/problem/B
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

int t(1), n, x, a[mxn]; bool dp[mxn];
void solve() {
    cin >> n; CLR(dp); x = 0; 
    FOR(i, n) cin >> a[i], x+=a[i];
    dp[0] = 1;
    FOR(i, n) {
        for(int j=100;j>=a[i];j--) {
            dp[j]|=dp[j-a[i]];
        }
    }
    if(x%2==0 && dp[x/2]) cout << "YES\n";
    else cout << "NO\n";

}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}