// 07/25/2020
// https://dmoj.ca/problem/coci19c4p3
#include<bits/stdc++.h>
using namespace std;

int n, l, r, K, a[101], dp[101][10001];
int main() {
    cin >> n >> l >> r >> K;
    for (int i=1;i<=n;i++) cin >> a[i];
    memset(dp, 0x3f, sizeof(dp)); dp[0][0] = 0;
    for (int i=1;i<=n;i++) {
        for (int j=r-l+1;j>0;j--) {
            int cost = abs(i - (l+j-1));
            for (int k=cost;k<=K;k++) {
                dp[j][k] = min(dp[j][k], dp[j-1][k-cost]+a[i]);
            }
        }
    }
    int ans = 2e9;
    for (int i=0;i<=K;i++) ans = min(ans, dp[r-l+1][i]);
    cout << ans << endl;
}