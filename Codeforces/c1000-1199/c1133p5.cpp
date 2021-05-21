// 05/20/2021
// https://codeforces.com/contest/1133/problem/E
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

int n, k;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; vector<int> vec(n), cnt(n);
    for(auto &x:vec) cin >> x;
    sort(vec.begin(), vec.end());
    REP(i, n) {
        while(i+cnt[i]<n && vec[i+cnt[i]]-vec[i]<=5) cnt[i]++;
    }
    vector<vector<int>> dp(n+1, vector<int>(k+1));
    REP(i, n) {
        for(int j=0;j<=k;j++) {
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            if(j+1<=k) dp[i+cnt[i]][j+1] = max(dp[i+cnt[i]][j+1], dp[i][j]+cnt[i]);
        }
    }
    cout << dp[n][k] << "\n";
}