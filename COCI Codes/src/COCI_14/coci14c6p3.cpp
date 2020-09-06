// 09/04/2020
// https://dmoj.ca/problem/coci14c6p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 3005;

int r, c, x, t[mxn], b[mxn]; char g[mxn][mxn], ans[mxn][mxn];
int main() {
    scanf("%d%d", &r, &c);
    for (int i=1;i<=c;i++) {
        t[i] = 0; b[i] = r+1;
    }
    for (int i=1;i<=r;i++) {
        scanf("%s", g[i]+1);
        for (int j=1;j<=c;j++) {
            if(g[i][j]=='.') ans[i][j]='.';
            else if(g[i][j]=='#') {
                ans[i][j]='#';
                b[j] = min(b[j], i);
            }
            else {
                ans[i][j]='.';
                t[j] = i;
            }
        }
    }
    x = r-1;
    for (int i=1;i<=c;i++) {
        if(t[i]==0) continue;
        x = min(x, b[i]-t[i]);
    } x--;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            if(g[i][j]=='X') ans[i+x][j]='X';
        }
    }
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            printf("%c", ans[i][j]);
        } puts("");
    }
}