// 12/20/2020
// https://codeforces.com/contest/977/problem/E
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
const int mxn = 2e5+5;

int n, m, u, v, ans, cnt, in[mxn]; vector<int> adj[mxn], con; bool vis[mxn];
void dfs(int u) {
    vis[u] = true;
    con.push_back(u);
    for(auto v:adj[u]) {
        if(!vis[v]) dfs(v);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, m) {
        cin >> u >> v;
        in[u]++; in[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    FOR(i, n) {
        if(!vis[i]) {
            con.clear();
            dfs(i); cnt = 1;
            for(auto v:con) cnt &= in[v]==2;
            if(cnt) ans++;
        }
    }
    cout << ans << endl;
}