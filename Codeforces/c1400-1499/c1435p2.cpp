// 10/25/2020
// https://codeforces.com/contest/1435/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 505;

int t, n, m, a[mxn][mxn], b[mxn][mxn], cnt[mxn];
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;
        REP(i, n) REP(j, m) cin >> a[i][j];
        REP(i, m) REP(j, n) cin >> b[i][j];
        REP(i, n) {
            int idx = 0;
            REP(x, n) {
                REP(y, m) {
                    if(a[x][y]==b[0][i]) idx = x;
                }
            }
            cnt[i]=idx;
        }
        REP(i, n) {
            REP(j, m) cout << a[cnt[i]][j] << " "; 
            cout << endl;
        }
    }
}