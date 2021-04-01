// 03/09/2021
// https://codeforces.com/contest/1433/problem/G
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
const int mxn = 1e3+3;

int n, m, k, u, v, w; vector<vector<int>> dis; vector<pii> adj[mxn]; vector<pii> route;
void dijkstra(int u, vector<int> &dis) {
    dis = vector<int>(n, 0x3f3f3f3f); dis[u] = 0;
    set<pii> sett; sett.insert({dis[u], u});
    while(!sett.empty()) {
        int v = sett.begin()->S; sett.erase(sett.begin());
        for(auto [to, w]:adj[v]) {
            if(dis[to]>dis[v]+w) {
                auto it = sett.find({dis[to], to});
                if(it!=sett.end()) sett.erase(it);
                dis[to] = dis[v]+w;
                sett.insert({dis[to], to});
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    REP(i, m) {
        cin >> u >> v >> w; u--; v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    REP(i, k) {
        cin >> u >> v; u--; v--;
        route.push_back({u, v});
    }
    dis = vector<vector<int>>(n);
    REP(i, n) dijkstra(i, dis[i]);
    int ans = 0x3f3f3f3f;
    for(int v=0;v<n;v++) {
        for(auto [to, w]:adj[v]) {
            int cur = 0;
            for(auto [a, b]:route) {
                cur+=min({dis[a][b], dis[a][v]+dis[to][b], dis[a][to]+dis[v][b]});
            }
            ans = min(ans, cur);
        }
    }
    cout << ans << "\n";
}