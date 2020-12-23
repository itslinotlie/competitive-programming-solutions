// 12/22/2020
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
const int mxn = 505;

int n, ans; char g[mxn][mxn]; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> s;
        FOR(j, n) g[i][j] = s[j-1];
    }
    for (int i=1;i<=n-2;i++) {
        for(int j=1;j<=n-2;j++) {
            if(g[i][j]==g[i+1][j+1] && g[i+1][j+1]==g[i][j+2] && g[i+1][j+1]==g[i+2][j] && g[i+1][j+1]==g[i+2][j+2] && g[i][j]=='X') ans++;
        }
    }
    cout << ans << endl;
}