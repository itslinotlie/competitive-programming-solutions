// 05/17/2021
// https://dmoj.ca/problem/ccc21s4
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

int n, m, q, p[mxn], dis[mxn]; vector<int> adj[mxn]; queue<int> qu;
multiset<int> sett;
void fun(int place, int time, int opt) {
    int x = time+dis[place];
    if(opt==0) sett.insert(x);
    else sett.erase(sett.find(x));
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> q;
    REP(i, m) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u); //reverse
    } memset(dis, 0x3f, sizeof(dis));
    dis[n] = 0; qu.push(n);
    while(!qu.empty()) {
        int u = qu.front(), x = dis[u]+1; qu.pop();
        for(auto v:adj[u]) {
            if(x<dis[v]) {
                dis[v] = x;
                qu.push(v);
            }
        }
    }
    FOR(i, n) {
        cin >> p[i];
        fun(p[i], i-1, 0);
    }
    while(q--) {
        int u, v; cin >> u >> v;
        fun(p[u], u-1, 1); fun(p[v], v-1, 1);
        swap(p[u], p[v]);
        fun(p[u], u-1, 0); fun(p[v], v-1, 0);
        cout << *sett.begin() << "\n";
    }
}