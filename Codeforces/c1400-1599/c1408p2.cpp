// 02/07/2021
// https://codeforces.com/contest/1408/problem/B
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
const int mxn = 1e2+2;

int t(1), n, k, a[mxn];
void solve() {
    cin >> n >> k; set<int> sett;
    FOR(i, n) {
        cin >> a[i];
        sett.insert(a[i]);
    }
    if(k==1) {
        cout << 1 - 2*(sett.size()>1) << endl;
    } else {
        ll ans = (sett.size()-1+k-2)/(k-1);
        cout << max(ans, 1ll) << endl;
    }

}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}