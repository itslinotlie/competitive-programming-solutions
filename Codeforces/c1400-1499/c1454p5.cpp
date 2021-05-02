// 05/01/2021
// https://codeforces.com/contest/1454/problem/E
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

int t(1), n, x, y;
void solve() {
    cin >> n; vector<set<int>> adj(n);
    REP(i, n) {
        cin >> x >> y; x--; y--;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    vector<int> val(n, 1);
    queue<int> leaf;
    REP(i, n) {
        if(adj[i].size()==1) leaf.push(i);
    }
    while(!leaf.empty()) {
        int u = leaf.front(); leaf.pop();
        int to = *adj[u].begin();
        val[to]+=val[u];
        val[u] = 0;
        adj[u].clear();
        adj[to].erase(u);
        if(adj[to].size()==1) leaf.push(to);
    }
    ll ans = 0;
    REP(i, n) {
        ans+=1LL*val[i]*(val[i]-1)/2;
        ans+=1LL*val[i]*(n-val[i]);
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}