// 12/21/2020
// https://codeforces.com/contest/1139/problem/C
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
const int mxn = 1e5+5, mod = 1e9+7;

int n, k, u, v, x; vector<int> adj[mxn]; bool vis[mxn];
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
void dfs(int u) {
    if(vis[u]) return;
    vis[u] = true;
    x++;
    for(auto v:adj[u]) dfs(v);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, n-1) {
        cin >> u >> v >> x;
        if(x==1) continue;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans = binpow(n, k);
    FOR(i, n) {
        if(vis[i]) continue;
        x = 0;
        dfs(i);
        ans = (ans-binpow(x, k)+mod)%mod;
    }
    cout << ans << endl;
}