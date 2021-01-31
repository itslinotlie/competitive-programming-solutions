// 01/31/2021
// https://dmoj.ca/problem/cco96p5
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
const int mxn = 1e3+3;

int n, m, u, v, x, y, dis[mxn], par[mxn]; string a, b; vector<int> adj[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, n) {
        cin >> a >> b;
        x = a[0]; y = b[0];
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    FOR(i, m) {
        cin >> a >> b;
        x = a[0]; y = b[0];
        memset(dis, -1, sizeof(dis));
        memset(par, -1, sizeof(par));
        queue<int> qu;
        qu.push(y);
        dis[y] = 0;
        while(!qu.empty()) {
            int u = qu.front(); qu.pop();
            for(int v:adj[u]) {
                if(dis[v]==-1) {
                    qu.push(v);
                    par[v] = u;
                    dis[v] = dis[u] + 1;
                }
            }
        }
        while(x!=-1) {
            cout << (char)x;
            x = par[x];
        } cout << endl;
    }
}