// 11/11/2020
// https://dmoj.ca/problem/cco08p4
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
const int mxn = 1e3+5;

int r, c, ans, m[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}}, g[mxn][mxn], p[mxn*mxn]; string s; set<int> sett;
int find(int x) {
    return p[x]==x? p[x]:p[x]=find(p[x]);
}
void unite(int x, int y) {
    x = find(x); y = find(y);
    if(x!=y) p[x] = y;
}
void dfs(int y, int x) {
    int i = g[y][x];
    if(p[r*y+x]!=p[r*(y+m[i][0])+x+m[i][1]]) {
        unite(r*y+x, r*(y+m[i][0])+x+m[i][1]);
        dfs(y+m[i][0], x+m[i][1]);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c;
    REP(i, r) REP(j, c) p[r*i+j] = r*i+j;
    REP(i, r) {
        cin >> s;
        REP(j, c) {
            if(s[j]=='W') g[i][j] = 0;
            else if(s[j]=='E') g[i][j] = 1;
            else if(s[j]=='S') g[i][j] = 2;
            else if(s[j]=='N') g[i][j] = 3;
        }
    }
    REP(i, r) REP(j, c) dfs(i, j);
    REP(i, r) {
        REP(j, c) {
            if(p[r*i+j]!=r*i+j) unite(p[r*i+j], r*i+j);
            sett.insert(p[r*i+j]);
        }
    }
    cout << sett.size() << endl;
}