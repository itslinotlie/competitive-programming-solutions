// 12/22/2020
// https://codeforces.com/contest/1465/problem/C
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

int t(1), n, m, u, v, x, loop; bool vis[mxn]; vector<int> adj[mxn];
void dfs(int x) {
    vis[x] = true;
    for(auto u:adj[x]) {
        if(!vis[u]) dfs(u);
    }
}
void solve() {
    cin >> n >> m; CLR(vis);
    x = loop = 0;
    FOR(i, mxn-1) adj[i].clear();
    FOR(i, m) {
        cin >> u >> v;
        if(u==v) {loop++; continue;}
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    FOR(i, n) {
        if(!vis[i]) {
            x++;
            dfs(i);
        }
    }
    int cycle = m - loop - n + x;
    int ans = m - loop + cycle;
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}