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


int t(1), n, x; map<int, int> mp;
void solve() {
    cin >> n; mp.clear();
    FOR(i, n) {
        cin >> x;
        mp[x]++;
    } x = 0;
    for(auto e:mp) x = max(x, e.S);
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}