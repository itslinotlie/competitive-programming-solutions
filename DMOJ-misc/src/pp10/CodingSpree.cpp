// 09/14/2020
// https://dmoj.ca/problem/spree
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int n, t, dp[mxn][mxn];
int main() {
    scanf("%d%d", &n, &t);
    for (int i=1, v, h;i<=n;i++) {
        scanf("%d%d", &v, &h);
        for (int j=1;j<=t;j++) {
            if(j<h) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(max(dp[i][j-1], dp[i-1][j]), dp[i-1][j-h]+v);
        }
    }
    printf("%d\n", dp[n][t]);
}