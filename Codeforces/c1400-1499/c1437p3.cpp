// 02/25/2021
// https://codeforces.com/contest/1437/problem/C
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 2e2+2;

int t(1), n, a[mxn], dp[mxn][2*mxn];
void solve() {
    cin >> n;
    REP(i, n) {
        cin >> a[i]; a[i]--;
    } sort(a, a+n);
    memset(dp, 0x3f, sizeof(dp)); dp[0][0] = 0;
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=2*n;j++) {
            if(i<n) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+abs(a[i]-j));
            dp[i][j+1] = min(dp[i][j+1], dp[i][j]);
        }
    }
    cout << dp[n][2*n-1] << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}