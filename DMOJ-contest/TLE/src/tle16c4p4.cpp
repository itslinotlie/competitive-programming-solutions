// 05/22/2021
// https://dmoj.ca/problem/tle16c4p4
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
const int mxn = 1e5+5;

int N, M, Q, rt, pre[mxn], cnt; vector<pii> adj[mxn]; ll dis[mxn], ans, D, r=1e12; bool vis[mxn];
void dfs(int u, int pa, ll d) {
    pre[u] = pa; dis[u] = d; vis[u] = true;
    if(d>D) {D = d; rt = u;}
    for(auto &e:adj[u]) {
        if(e.F!=pa) dfs(e.F, u, d+e.S);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> Q;
    for(int i=1,u,v,w;i<=M;i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    for(int i=1;i<=N;i++) {
        if(vis[i]) continue;
        D = -1;
        dfs(i, 0, 0);
        D = -1;
        dfs(rt, 0, 0);
        if(Q==1) {ans+=D+1;}
        else {
            r = 1e12;
            for(int u = rt;u!=0;u=pre[u]) r = min(r, max(dis[u], D-dis[u]));
            if(r>ans) {ans = r; cnt = 1;}
            else if(r==ans) cnt++;
        }
    }
    cout << (Q==1? ans-1:(cnt==1? ans:ans+1)) << "\n";
}