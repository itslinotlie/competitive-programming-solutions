// 03/06/2021
// https://codeforces.com/contest/131/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 3e3+3;

int n, u, v, color[mxn], par[mxn], mark[mxn], dis[mxn], ans[mxn]; vector<int> adj[mxn]; bool vis[mxn]; 
void dfs(int u, int pa, int& cycleNum) {
    if(color[u]==2) return;
    //seen node, but not completely visited aka cycle
    if(color[u]==1) {
        cycleNum++;
        int cur = pa;
        mark[cur] = cycleNum;
        //backtrack
        while(cur!=u) {
            cur = par[cur];
            mark[cur] = cycleNum;
        } return;
    }
    par[u] = pa;
    color[u] = 1;
    for(int v:adj[u]) {
        if(v==par[u]) continue;
        dfs(v, u, cycleNum);
    } color[u] = 2;
}
void bfs(int x) {
    queue<int> qu; CLR(vis); CLR(dis);
    qu.push(x); vis[x] = true;
    while(!qu.empty()) {
        int u = qu.front(); qu.pop();
        for(int v:adj[u]) {
            if(!vis[v]) {
                qu.push(v); vis[v] = true; dis[v] = dis[u] + 1;
            }
        }
    }
    REP(i, n) {
        if(mark[i]==1) ans[x] = min(ans[x], dis[i]);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) {
        cin >> u >> v; 
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    } int cycleNum = 0;
    dfs(0, -1, cycleNum); //anything !0 is cycle
    memset(ans, 0x3f, sizeof(ans));
    REP(i, n) bfs(i);
    REP(i, n) cout << ans[i] << " "; cout << endl;


}