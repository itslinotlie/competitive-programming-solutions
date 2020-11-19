// 11/12/2020
// https://codeforces.com/contest/987/problem/C
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
#define LINF 0x3f3f3f3f3f3f3f3f
const int mxn = 3e3+5;

int n, a[3][mxn]; ll ans, x;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; ans = LINF;
    FOR(i, 2) FOR(j, n) cin >> a[i][j];
    FOR(i, n) {
        ll idx(-1); x = a[2][i];
        for (int j=1;j<i;j++) {
            if(a[1][j]>=a[1][i]) continue;
            if(idx==-1 || a[2][idx]>a[2][j]) idx = j;
        }
        if(idx==-1) continue;
        x += a[2][idx];
        idx = -1;
        for (int j=i+1;j<=n;j++) {
            if(a[1][j]<=a[1][i]) continue;
            if(idx==-1 || a[2][idx]>a[2][j]) idx = j;
        }
        if(idx==-1) continue;
        x+=a[2][idx];
        ans = min(ans, x);
    }
    if(ans==LINF) puts("-1");
    else cout << ans << "\n";
}