// 11/03/2020
// https://codeforces.com/contest/508/problem/A
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

int r, c, k, x, y; bool vis[mxn][mxn];
int main() {
    cin >> r >> c >> k;
    FOR(i, k) {
        cin >> x >> y;
        vis[x][y] = true;
        if(vis[x+1][y] && vis[x+1][y+1] && vis[x][y+1]) {cout << i << endl; return 0;}
        if(vis[x+1][y] && vis[x+1][y-1] && vis[x][y-1]) {cout << i << endl; return 0;}
        if(vis[x][y-1] && vis[x-1][y-1] && vis[x-1][y]) {cout << i << endl; return 0;}
        if(vis[x-1][y] && vis[x-1][y+1] && vis[x][y+1]) {cout << i << endl; return 0;}
    }
    puts("0");
}