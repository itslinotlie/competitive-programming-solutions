// 12/12/2020
// https://dmoj.ca/problem/wc18c3s2
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

int n, k, f, mx, dis[mxn], dep[mxn]; vector<int> adj[mxn]; bool gym[mxn];
void dfs(int u, int pa) {
    dis[u] = 0;
    for(int v:adj[u]) {
        if(v!=pa) {
            dep[v] = dep[u] + 1;
            dfs(v, u);
            if(gym[v]) {
                dis[u]+=dis[v]+1;
                gym[u] = true;
            }
        }
    }
    if(gym[u]) mx = max(mx, dep[u]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> f;
    for (int i=1,x;i<=k;i++) {
        cin >> x;
        gym[x] = true;
    }
    for (int i=1, u, v;i<n;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0); 
    int no_drag = 2*dis[1]-mx;
    gym[f] = true;
    dfs(1, 0);
    int drag = dis[1];
    cout << min(no_drag, drag) << endl;
}