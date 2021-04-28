// 04/10/2021
// https://dmoj.ca/problem/btoi17p6
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

int n, d, dis[mxn], ans; vector<int> adj[mxn];
void dfs(int u, int pa) {
    deque<int> qu;
    for(int v:adj[u]) {
        if(v==pa) continue;
        dfs(v, u); qu.push_back(dis[v]+1);
    }
    sort(qu.begin(), qu.end());
    while(qu.size()>=2 && qu[0]+qu[1]<d) {
        ans--; qu.pop_front();
    }
    if(qu.empty()) dis[u] = 0;
    else dis[u] = qu[0]%d;
    if(dis[u]==0) ans++;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> d;
    for(int i=1,pa;i<n;i++) {
        cin >> pa;
        adj[pa].push_back(i);
        adj[i].push_back(pa);
    } dfs(0, -1);
    cout << ans << endl;
}