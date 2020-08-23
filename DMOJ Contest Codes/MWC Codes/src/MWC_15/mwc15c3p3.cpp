// 07/26/2020
// https://dmoj.ca/problem/mwc15c3p3
#include<bits/stdc++.h>
using namespace std;

int n, q, m[8][2] = {{-1, 0},{1, 0},{0, -1},{0, 1},{-1, -1}, {1, 1}, {-1, 1}, {1, -1}}; string word; char g[28][28]; bool vis[28][28], ans;
void dfs(int y, int x, int id) {
    if(id==word.size()) {ans = true; return;}
    for (int i=0;i<8;i++) {
        if (y+m[i][0]<=0 || y+m[i][0]>n || x+m[i][1]<=0 || x+m[i][1]>n || vis[y+m[i][0]][x+m[i][1]]) continue;
        if(g[y+m[i][0]][x+m[i][1]]!=word[id]) continue;
        vis[y+m[i][0]][x+m[i][1]] = true;
        dfs(y+m[i][0], x+m[i][1], id+1); 
    }
}
int main() {
    cin >> n >> q;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cin >> g[i][j];
        }
    }
    for (int i=1;i<=q;i++) {
        cin >> word; ans = false;
        for (int j=1;j<=n;j++) {
            for (int k=1;k<=n;k++) {
                memset(vis, false, sizeof(vis));
                if(word[0]==g[j][k]) {
                    vis[j][k] = true;
                    dfs(j, k, 1);
                }
            }
        }
        printf(ans? "good puzzle!\n":"bad puzzle!\n");
    }
}