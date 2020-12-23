// 12/20/2020
// https://codeforces.com/contest/1106/problem/D
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

int n, m, u, v; vector<int> adj[mxn]; bool vis[mxn]; string ans; priority_queue<int, vector<int>, greater<int>> pq;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, m) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    pq.push(1);
    while(!pq.empty()) {
        int u = pq.top(); pq.pop(); 
        if(vis[u]) continue;
        vis[u] = true;
        ans+=to_string(u)+" ";
        for(auto v:adj[u]) {
            if(!vis[v]) pq.push(v);
        }
    }
    cout << ans << endl;
}
