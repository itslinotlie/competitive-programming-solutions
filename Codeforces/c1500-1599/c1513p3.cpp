// 04/13/2021
// https://codeforces.com/contest/1513/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 2e5+5, mod = 1e9+7;

int t(1), n, m, ans, dp[mxn];
void init() {
    for(int i=0;i<9;i++) dp[i] = 2;
    dp[9] = 3;
    for(int i=10;i<mxn;i++) {
        dp[i] = (dp[i-9]+dp[i-10])%mod;
    }
}
void solve() {
    cin >> n >> m; ans = 0;
    while(n>0) {
        int x = n%10;
        ans+=((m+x<10)? 1:dp[m+x-10]);
        ans%=mod;
        n/=10;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t; init();
    for (int i=1;i<=t;i++) {
        solve();
    }
}