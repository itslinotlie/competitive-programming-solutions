// 10/18/2020
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define FOR(i, n) for(int i=1;i<=n;i++)
#define REP(i, n) for(int i=0;i<n;i++)
#define F first
#define S second
const int mxn = 1e3+5;

int n; ll ans, a[mxn][mxn];
void work() {
    cin >> n; ans = 0;
    memset(a, 0, sizeof(a));
    for (int i=1;i<=n;i++) {
        for (int j=1,x;j<=n;j++) {
            cin >> a[i][j];
        }
    }
    for (int len=0;len<=n;len++) {
        ll cnt = 0, cnt2 = 0;
        for (int i=1;i+len<=n;i++) {
            int r = i+len;
            cnt+=a[i][r];
            cnt2+=a[r][i];
        }
        ans = max(ans, max(cnt2, cnt));
    }
    
    cout << ans << "\n";
}
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    for(int t=1;t<=T;t++) {
        cout << "Case #" << t << ": ";
        work();
    }
}