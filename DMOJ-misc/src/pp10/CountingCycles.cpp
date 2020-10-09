// 10/04/2020
// https://dmoj.ca/problem/graph1p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 11;

int n, ans; vector<int> adj[mxn]; bool vis[mxn]; 
void dfs(int u, int mini) {
    vis[u] = true;
    for (auto v:adj[u]) {
        if(v==mini) ans++;
        if(!vis[v] && v>mini) dfs(v, mini);
    }
    vis[u] = false;
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=1,x;j<=n;j++) {
            cin >> x;
            if(x) adj[i].push_back(j);
        }
    }
    for (int i=1;i<=n;i++) dfs(i, i);
    cout << ans << "\n";
}