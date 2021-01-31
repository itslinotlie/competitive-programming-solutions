// 09/11/2020
// https://dmoj.ca/problem/cco15p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 18, MM = 1<<18;

int n, m, adj[mxn][mxn], dp[mxn][MM];
int fun(int u, int mask) {
    if(u==n-1) return 0;
    if(dp[u][mask]>0) return dp[u][mask];
    
    int &ret = dp[u][mask];
    for (int v=1;v<n;v++) {
        if(adj[u][v]>0 && (mask&1<<v)==0) {
            ret = max(ret, adj[u][v]+fun(v, mask|1<<v));
        }
    }
    return ret;
}
int main() {
    scanf("%d%d", &n, &m);
    memset(dp, -0x3f, sizeof(dp));
    for (int i=1, u, v, w;i<=m;i++) {
        scanf("%d%d%d", &u, &v, &w);
        adj[u][v] = w;
    }
    printf("%d\n", fun(0, 1));
}