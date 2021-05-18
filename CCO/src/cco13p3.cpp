// 04/03/2021
// https://dmoj.ca/problem/cco13p3
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
const int mxn = 4e5+5;

int n, len[mxn], dia; ll cnt[mxn], num; vector<int> adj[mxn];
void dfs(int u, int pa) {
    len[u] = 0; cnt[u] = 1;
    for(int v:adj[u]) {
        if(v==pa) continue;
        dfs(v, u);
        if(len[v]+len[u]+1>dia) {
            dia = len[v] + len[u] + 1; num = cnt[u]*cnt[v];
        } else if(len[v]+len[u]+1==dia) {
            num+=cnt[u]*cnt[v];
        }
        if(len[v]+1>len[u]) {
            len[u] = len[v]+1; cnt[u] = cnt[v];
        } else if(len[v]+1==len[u]) {
            cnt[u]+=cnt[v];
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=1,u,v;i<n;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    } dfs(1, 0);
    cout << dia+1 << " " << num << endl;
}