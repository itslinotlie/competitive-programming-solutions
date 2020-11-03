// 10/10/2020
// https://codeforces.com/contest/893/problem/C
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, m, c[mxn]; vector<int> adj[mxn]; bool vis[mxn]; long long ans;
int bfs(int x) {
    queue<int> qu;
    qu.push(x); vis[x] = true; int mini = c[x];
    while(!qu.empty()) {
        int u = qu.front(); qu.pop();
        for (auto v:adj[u]) {
            if(!vis[v]) {
                qu.push(v); vis[v] = true; mini = min(mini, c[v]);
            }
        }
    }
    return mini;
}
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> c[i];
    for (int i=1,u,v;i<=m;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i=1;i<=n;i++) {
        if(!vis[i]) {
            ans += bfs(i);
        }
    }
    cout << ans << endl;
}