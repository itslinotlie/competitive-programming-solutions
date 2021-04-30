// 03/30/2021
// https://cses.fi/problemset/task/1666
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
 
int n, m, u, v, p[mxn]; vector<pii> ans;
int find(int x) {
    return p[x]==x? p[x]:p[x]=find(p[x]);
}
void unite(int x, int y) {
    x = find(x); y = find(y);
    if(x!=y) p[x] = y;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    REP(i, n) p[i] = i;
    REP(i, m) {
        cin >> u >> v;
        unite(--u, --v);
    }
    REP(i, n) unite(p[i], i);
    set<int> sett; sett.insert(p[0]);
    REP(i, n) {
        if(sett.find(p[i])==sett.end()) {
            ans.push_back({p[0], p[i]});
            sett.insert(p[i]);
        }
    }
    cout << ans.size() << endl;
    for(auto x:ans) cout << x.F+1 << " " << x.S+1 << endl;
}