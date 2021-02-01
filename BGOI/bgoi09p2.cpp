// 11/02/2020
// https://dmoj.ca/problem/bgoi09p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, x; vector<int> adj[mxn]; bool vis[mxn];
void bfs(int k) {
    queue<int> qu;
    qu.push(k); vis[k] = true;
    while(!qu.empty()) {
        int u = qu.front(); qu.pop();
        for(auto v:adj[u]) {
            if(!vis[v]) {
                qu.push(v); vis[v] = true;
            }
        }
    }
}
int main() {
    for (int t=1;t<=2;t++) { x = 0;
        cin >> n; memset(vis, false, sizeof(vis));
        for (int i=1;i<=n;i++) adj[i].clear();
        for (int i=1,u;i<=n;i++) {
            cin >> u;
            adj[i].push_back(u);
            adj[u].push_back(i);
        }
        for (int i=1;i<=n;i++) {
            if(!vis[i]) {
                x++; bfs(i);
            }
        }
        cout << x << " ";
    } cout << endl;
}