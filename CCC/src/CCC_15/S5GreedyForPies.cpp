// 01/30/2021
// https://dmoj.ca/problem/ccc15s5
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
const int mxn = 3e3+3, mxm = 1e2+2;;

int n, a[3003], m, b[mxm], dp[mxn][mxm][mxm][2];
int fun(int i, int l, int r, int can) {
    if(dp[i][l][r][can] > 0) return dp[i][l][r][can];
    int best = 0;
    if(i<=n) {
        best = max(best, fun(i+1, l, r, true));
        if(can) {
            best = max(best, a[i]+fun(i+1, l, r, false));
        }
    }
    if(l<=r) {
        best = max(best, fun(i, l+1, r, true));
        if(can) {
            best = max(best, b[r] + fun(i, l, r-1, false));
        }
    }
    return dp[i][l][r][can] = best;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    cin >> m;
    FOR(i, m) cin >> b[i];
    sort(b+1, b+1+m);
    cout << fun(1, 1, m, 1) << endl;
}