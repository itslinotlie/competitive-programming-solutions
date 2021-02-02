// 02/02/2021
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
const int mxn = 2e2+2;

int t(1), q, d, x, mx, dp[mxn];
void solve() {
    cin >> q >> d; CLR(dp); dp[0] = 1;
    if(d==0) d+=10;
    mx = d*10;
    for(int i=0;10*i+d<=mx;i++) {
        for(int j=0;10*i+d+j<=mx;j++) {
            dp[10*i+d+j]|=dp[j];
        }
    }
    while(q--) {
        cin >> x;
        if(x>=mx || dp[x]) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}