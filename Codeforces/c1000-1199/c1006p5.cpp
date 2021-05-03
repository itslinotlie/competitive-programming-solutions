// 05/02/2021
// https://codeforces.com/contest/1006/problem/E
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
const int mxn = 2e5+5;

int n, q, u, k; vector<int> adj[mxn]; 
int cur_order; vector<int> order, max_order;
vector<int> sort_order;
void dfs(int x) {
    sort_order[cur_order] = x;
    order[x] = cur_order++;
    for(int c:adj[x]) dfs(c);
    max_order[x] = cur_order - 1;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> q;
    order.resize(n); max_order.resize(n); sort_order.resize(n);
    for(int i=1, p;i<n;i++) {
        cin >> p; p--;
        adj[p].push_back(i);
    } dfs(0);
    REP(i, q) {
        cin >> u >> k; u--; k--;
        k+=order[u];
        int ans = -1;
        if(k<=max_order[u]) ans = sort_order[k] + 1;
        cout << ans << "\n";
    }
}
