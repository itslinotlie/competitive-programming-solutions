// 03/30/2021
// https://cses.fi/problemset/task/1667
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

int n, m, u, v, dis[mxn], vis[mxn], pa[mxn]; vector<int> adj[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    REP(i, m) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> qu; qu.push(1); vis[1] = true; dis[1] = 1;
    while(!qu.empty()) {
        u = qu.front(); qu.pop();
        for(int v:adj[u]) {
            if(!vis[v]) {
                qu.push(v); vis[v] = true; dis[v] = dis[u]+1; pa[v] = u;
            }
        }
    }
    if(dis[n]==0) cout << "IMPOSSIBLE" << endl;
    else {
        cout << dis[n] << endl;
        int x = pa[n]; pa[1] = 1; vector<int> vec; vec.push_back(n);
        while(x!=1) { 
            vec.push_back(x);
            x = pa[x];
        } vec.push_back(1);
        reverse(vec.begin(), vec.end());
        for(auto x:vec) cout << x << " "; cout << endl;
    }
}