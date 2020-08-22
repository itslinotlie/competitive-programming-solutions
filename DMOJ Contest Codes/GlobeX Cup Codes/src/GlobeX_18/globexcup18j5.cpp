// 08/11/2020
// https://dmoj.ca/problem/globexcup18j5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5 + 5;

int n, m, q, c, sum, dis[mxn];
vector<int> adj[mxn]; bool vis[mxn], ans;
void bfs(int x) {
    queue<int> qu;
    qu.push(x); vis[x] = true; dis[x] = 0;
    while(!qu.empty()) {
        int u = qu.front(); qu.pop();
        for (auto v:adj[u]) {
            if(!vis[v]) {
                qu.push(v); vis[v] = true; dis[v] = dis[u] + 1;
            }
        }
    }
}
int main() {
    scanf("%d%d%d%d", &n, &m, &q, &c);
    for (int i=1,u,v;i<=m;i++) {
        scanf("%d%d", &u, &v);
        adj[u].push_back(v); adj[v].push_back(u);
    }
    bfs(c);
    for (int i=1,a,b;i<=q;i++) {
        scanf("%d%d", &a, &b);
        (!vis[a]||!vis[b])? cout<<"This is a scam!"<<endl:cout<<dis[a]+dis[b]<<endl;
    }
}