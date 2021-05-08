// 04/25/2021
// https://dmoj.ca/problem/coci16c1p4
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
const int mxn = 1e6+6;

struct frac {
    ll x, y;
    frac(ll x0, ll y0) {x = x0/gcd(x0, y0); y = y0/gcd(x0, y0);}
    bool operator < (const frac &a) const {
        return x * a.y < a.x * y;
    }
};
int n, a[mxn], len[mxn], mx[mxn], mx2[mxn], ch[mxn]; vector<int> adj[mxn]; frac ans(1e18, 1);
void dfs1(int u, int pa) {
    len[u] = a[u] == 1;
    for(int v:adj[u]) {
        if(v==pa) continue;
        dfs1(v, u);
        if(len[v] > mx[u]) {mx2[u] = mx[u]; mx[u] = len[v]; ch[u] = v;}
        else if(len[v]>mx2[u]) mx2[u] = len[v];

        if(a[u]==1) len[u] = max(len[u], len[v]+1);
    }
}
void dfs2(int u, int pa, int up) {
    ans = min(ans, frac{a[u], mx[u]+mx2[u]+1});
    ans = min(ans, frac{a[u], mx[u]+up+1});
    for(int v:adj[u]) {
        if(v==pa) continue;
        int tmp = 0;
        if(a[u]==1) {
            if(v==ch[u]) tmp = max(up, mx2[u]) + 1;
            else tmp = max(up, mx[u]) + 1;
        }
        dfs2(v, u, tmp);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=1,u,v;i<n;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++) {
        cin >> a[i]; ans = min(ans, frac{a[i], 1});
    }
    dfs1(1, 0); dfs2(1, 0, 0);
    cout << ans.x << "/" << ans.y << "\n";
}