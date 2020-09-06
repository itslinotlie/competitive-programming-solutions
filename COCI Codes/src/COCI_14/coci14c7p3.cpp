// 09/03/2020
// https://dmoj.ca/problem/coci14c7p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5;

int n, a[3][mxn], dp[4][mxn], ans = 0x3f3f3f3f, x[3] = {0, 1, 2};
int main() {
    scanf("%d", &n);
    for (int t=0;t<3;t++) 
        for (int i=1;i<=n;i++) 
            scanf("%d", &a[t][i]);
    do {
        memset(dp, 0x3f, sizeof(dp)); dp[0][0] = dp[1][0] = 0;
        for (int T=1;T<=3;T++) {
            int t = x[T-1];
            for (int i=T;i<=n;i++) {
                if(T==1) dp[T][i] = dp[T][i-1] + a[t][i];
                else dp[T][i] = a[t][i] + min(dp[T][i-1], dp[T-1][i-1]);
            }
        }
        ans = min(ans, dp[3][n]);
    } while(next_permutation(x, x+3));
    printf("%d\n", ans);
}