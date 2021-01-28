// 12/21/2020
// https://codeforces.com/contest/770/problem/C
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
const int mxn = 1e5+5;

int n, k, x, y, cycle, color[mxn]; vector<int> ans, need, adj[mxn];
void dfs(int u) {
    if(color[u]==0) {
        color[u] = 1;
        for(auto v:adj[u]) dfs(v);
        color[u] = 2;
        ans.push_back(u);
    } else if(color[u]==1) {
        cycle = 1;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, k) {
        cin >> x;
        need.push_back(x);
    }
    FOR(i, n) {
        cin >> x;
        FOR(j, x) {
            cin >> y;
            adj[i].push_back(y);
        }
    }
    for(auto u:need) dfs(u);
    if(cycle) {
        cout << "-1\n";
    } else {
        cout << ans.size() << endl;
        for(auto x:ans) cout << x << " ";
    }
}