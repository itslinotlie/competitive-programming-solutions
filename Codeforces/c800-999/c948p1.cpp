// 03/11/2021
// https://codeforces.com/contest/948/problem/A
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
const int mxn = 5e2+2;

int r, c, m[4][2] = {{-1,0},{1,0},{0,-1},{0,1}}; char g[mxn][mxn]; string s; vector<pii> vec; bool ans = true;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c;
    REP(i, r) {
        cin >> s;
        REP(j, c) {
            g[i][j] = s[j];
            if(s[j]=='W') vec.push_back({i, j});
        }
    }
    for(auto u:vec) {
        REP(i, 4) {
            pii v = {u.F+m[i][0], u.S+m[i][1]};
            if(v.F<0 || v.F>=r || v.S<0 || v.S>=c) continue;
            if(g[v.F][v.S]=='S') ans = false;
            else if(g[v.F][v.S]=='.') g[v.F][v.S] = 'D';
        }
    }
    if(!ans) cout << "No\n";
    else {
        cout << "Yes\n";
        REP(i, r) {
            REP(j, c) cout << g[i][j]; cout << "\n";
        }
    }
}