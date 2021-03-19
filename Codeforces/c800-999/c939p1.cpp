// 02/11/2021
// https://codeforces.com/contest/939/problem/A
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 5e3+3;

int n, x; vector<int> adj[mxn]; bool ans = false;
void dfs(int u, int pa, int rt, int cnt) {
    if(cnt>3) return;
    for(int v:adj[u]) {
        if(cnt==3 && v==rt) ans = true; 
        else if(v==rt) return;
        else dfs(v, u, rt, cnt+1);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {cin >> x; adj[i].push_back(x);}
    FOR(i, n) dfs(i, i, i, 1);
    cout << (ans? "YES":"NO") << endl;
}