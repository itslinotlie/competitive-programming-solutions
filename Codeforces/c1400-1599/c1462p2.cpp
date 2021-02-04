// 02/04/2021
// https://codeforces.com/contest/1462/problem/B
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


int t(1), n; string s, a[3][2] = {{"2", "020"}, {"20", "20"},{"202", "0"}}; bool vis[4];
void solve() {
    cin >> n >> s; bool flag = false;
    REP(t, 3) {
        if(s.substr(0, a[t][0].size())==a[t][0] && s.substr(s.size()-a[t][1].size(), a[t][1].size())==a[t][1]) flag = true;
    }
    if(s.substr(0, 4)=="2020" || s.substr(s.size()-4, 4)=="2020" || flag) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}