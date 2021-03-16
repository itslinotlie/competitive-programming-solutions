// 09/08/2020
// https://dmoj.ca/problem/dpo
#include<bits/stdc++.h>
using namespace std;
const int mxn = 22, MM = 1<<22; const long long MOD = 1e9+7;

int n, adj[mxn][mxn]; long long dp[MM];
int fun(int man, int mask) {
    if(man>=n) return 1.0;
    if(dp[mask]!=-1) return dp[mask];

    dp[mask] = 0;
    long long &ret = dp[mask];
    for (int k=0;k<n;k++) {
        if((mask>>k)&1) continue;
        if(adj[man][k]) ret = (ret + fun(man+1, mask|(1<<k)) % MOD) % MOD;
    }
    return ret;
}
int main() {
    scanf("%d", &n);
    fill(dp, dp+(1<<n), -1);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("%d\n", fun(0, 0));
}