// 06/27/2020
// https://dmoj.ca/problem/coci06c1p4
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int r, c, m[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
pii p1, p2; vector<pair<int, int>> wut;
char g[51][51]; bool vis[51][51]; int dis[51][51];
void bfs() {
    queue<pair<int, int>> que;
    for (auto x : wut) {
        que.push(make_pair(x.first, x.second));
        vis[x.first][x.second] = true;
    }
    que.push(make_pair(p1.first, p1.second)); 
    vis[p1.first][p1.second] = true;
    while(!que.empty()) {
        pii tmp = que.front(); que.pop();
        for (int i=0;i<4;i++) {
            int yy = tmp.first+m[i][0], xx = tmp.second+m[i][1];
            if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='X' || (g[yy][xx]=='*' && g[tmp.first][tmp.second]!='*')) continue;
            if (g[tmp.first][tmp.second]=='*') {
                if (g[yy][xx]!='D') {que.push(make_pair(yy, xx)); g[yy][xx] = '*'; vis[yy][xx] = true;}
            }
            else {
                que.push(make_pair(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.first][tmp.second]+1;
            }
        }
    }
}

int main() {
    cin >> r >> c;
    for (int i=1;i<=r;i++) {
        string x; getline(cin, x);
        if (i==1) getline(cin, x);
        for (int j=1;j<=c;j++) {
            g[i][j] = x[j-1];
            if (g[i][j]=='S') {p1.first=i;p1.second=j;}
            if (g[i][j]=='D') {p2.first=i;p2.second=j;}
            if (g[i][j]=='*') {wut.push_back(make_pair(i, j));}
        }
    }
    bfs();
    if (vis[p2.first][p2.second]) cout << dis[p2.first][p2.second] << endl;
    else cout << "KAKTUS" << endl;
}