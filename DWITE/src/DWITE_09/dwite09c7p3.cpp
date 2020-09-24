// 08/15/2020
// https://dmoj.ca/problem/dwite09c7p3
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define f first
#define s second

char g[11][11]; bool vis[11][11]; int area, m[4][2]={{-1,0},{1,0},{0,-1},{0,1}}; string s; pii p;
void bfs() {
    queue<pii> qu; qu.push(p); area = 0;
    memset(vis, false, sizeof(vis)); vis[p.f][p.s] = true; area++;
    while(!qu.empty()) {
        pii u = qu.front(); qu.pop();
        for (int i=0;i<4;i++) {
            pii v = {u.f+m[i][0], u.s+m[i][1]};
            if(v.f<=0 || v.f>10 || v.s<=0 || v.s>10 || vis[v.f][v.s] || g[v.f][v.s]!='#') continue;
            qu.push(v); vis[v.f][v.s] = true; area++;
        }
    }
}
int main() {
    for (int T=1;T<=5;T++) {
        for (int i=1;i<=10;i++) {
            getline(cin, s);
            for (int j=1;j<=10;j++) {
                g[i][j] = s[j-1];
                if(g[i][j]=='A') p = {i,j};
            }
        }
        bfs();
        printf("%d\n", area);
        getline(cin, s);
    }
}