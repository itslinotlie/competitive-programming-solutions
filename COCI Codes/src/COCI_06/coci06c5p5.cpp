// 09/04/2020
// https://dmoj.ca/problem/coci06c5p5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e2+5;

int n, ans, dp[2*mxn][2*mxn];
int main() {
    scanf("%d", &n);
    for (int i=1, x;i<=n;i++) {
        scanf("%d", &x);
        dp[i][i] = dp[i+n][i+n] = x%2;
    }
    for (int len=1;len<n;len++) {
        for (int lft=1;lft+len<=2*n;lft++) {
            int rit = lft+len;
            dp[lft][rit] = max(dp[lft][lft]-dp[lft+1][rit], dp[rit][rit]-dp[lft][rit-1]);
        }
    }
    for (int i=1;i<=n;i++) {
        if(dp[i][i]-dp[i+1][i-1+n]>0) ans++;
    }
    printf("%d\n", ans);
}