// 02/09/2021
// http://codeforces.com/contest/1418/problem/C
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

int t(1), n;
void solve() {
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> him(n+1), us(n+1);
    him[n] = us[n] = 0;
    for(int i=n-1;i>=0;i--) {
        him[i] = us[i+1]+a[i];
        if(i+2<=n) him[i] = min(him[i], us[i+2]+a[i+1]+a[i]);

        us[i] = him[i+1];
        if(i+2<=n) us[i] = min(us[i], him[i+2]);
    }
    cout << him[0] << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}