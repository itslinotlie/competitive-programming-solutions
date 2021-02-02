// 09/25/2020
// https://dmoj.ca/problem/btoi13p5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 4e3+5;
typedef pair<int, int> pii;
//bfs top tracks and then bfs all the tracks around it
int r, c, x, m[4][2]={{-1,0},{1,0},{0,-1},{0,1}}; char g[mxn][mxn]; bool vis[mxn][mxn];
queue<pii> q[2];
void bfs() {
    while(q[0].size()) {
        int y = q[0].front().first, x = q[0].front().second; q[0].pop();
        for (int i=0;i<4;i++) {
            int ny = y+m[i][0], nx = x+m[i][1];
            if(ny<1 || ny>r || nx<1 || nx>c || vis[ny][nx] || g[ny][nx]=='.') continue;
            g[ny][nx]==g[y][x]? q[0].push({ny, nx}):q[1].push({ny, nx});
            vis[ny][nx] = true;
        }
    }
}
int main() {
    scanf("%d%d", &r, &c);
    for (int i=1;i<=r;i++) scanf("%s", g[i]+1);
    q[0].push({1, 1}); vis[1][1] = true;
    while(true) {
        x++; bfs();
        if(q[1].empty()) break;
        swap(q[0], q[1]);
    }
    printf("%d\n", x);
}