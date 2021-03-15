// 03/09/2021
// https://codeforces.com/contest/1433/problem/F
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
const int mxn = 77;

int n, m, k, a[mxn][mxn], dp[mxn][mxn][mxn][mxn]; //x, y, cnt, rem
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    REP(i, n) REP(j, m) cin >> a[i][j];
    memset(dp, -0x3f, sizeof(dp)); dp[0][0][0][0] = 0;
    REP(i, n) REP(j, m) REP(cnt, m/2+1) REP(rem, k) {
        if(dp[i][j][cnt][rem]==-0x3f3f3f3f) continue;
        int r = (j==m-1? i+1:i);
        int c = (j==m-1? 0:j+1);
        if(i!=r) dp[r][c][0][rem] = max(dp[r][c][0][rem], dp[i][j][cnt][rem]);
        else dp[r][c][cnt][rem] = max(dp[r][c][cnt][rem], dp[i][j][cnt][rem]);

        if(cnt+1<=m/2) {
            int sum = (rem+a[i][j])%k;
            if(i!=r) dp[r][c][0][sum] = max(dp[r][c][0][sum], dp[i][j][cnt][rem]+a[i][j]);
            else dp[r][c][cnt+1][sum] = max(dp[r][c][cnt+1][sum], dp[i][j][cnt][rem]+a[i][j]);
        }
    }
    cout << max(0, dp[n][0][0][0]) << "\n";
}