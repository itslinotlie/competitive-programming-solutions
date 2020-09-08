// 09/04/2020
// https://dmoj.ca/problem/coci13c2p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 15e2+5;

int n, adj[mxn][mxn], dp[mxn][mxn];
int fun(int l, int r) {
    if(l==n || r==n) return 0;
    if(dp[l][r]) return dp[l][r];
    int x = 1+max(l, r);
    dp[l][r] = min(fun(x, r)+adj[x][l], fun(l, x)+adj[r][x]);
    return dp[l][r];
}
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) 
        for (int j=1;j<=n;j++) 
            scanf("%d", &adj[i][j]);
    printf("%d\n", fun(1, 1));    
}