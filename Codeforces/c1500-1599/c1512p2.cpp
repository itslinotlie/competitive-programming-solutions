// 04/10/2021
// https://codeforces.com/contest/1512/problem/B
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
const int mxn = 4e2+2;

int t(1), n, x, y; char g[mxn][mxn]; string s; bool flag; pii p1, p2;
void solve() { flag = 1;
    cin >> n;
    REP(i, n) {
        cin >> s;
        REP(j, n) {
            g[i][j] = s[j];
            if(g[i][j]=='*') {
                if(flag) p1 = {i, j};
                else p2 = {i, j};
                flag = 0;
            }
        }
    }
    if(p1.F==p2.F) {
        if(p1.F!=0) {g[p1.F-1][p1.S]='*'; g[p2.F-1][p2.S]='*';}
        else {g[p1.F+1][p1.S]='*'; g[p2.F+1][p2.S]='*';}
    } else if(p1.S==p2.S) {
        if(p1.S!=0) {g[p1.F][p1.S-1]='*'; g[p2.F][p2.S-1]='*';}
        else {g[p1.F][p1.S+1]='*'; g[p2.F][p2.S+1]='*';}
    } else {
        g[p1.F][p2.S] = '*'; g[p2.F][p1.S] = '*';
    }
    REP(i, n) {
        REP(j, n) cout << g[i][j]; cout << "\n";
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}