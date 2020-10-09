// 07/01/2020
// https://dmoj.ca/problem/rgss4
#include<bits/stdc++.h>
using namespace std;

int n, arr[1002], dp[1002], ans;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) scanf("%d", &arr[i]), dp[i] = arr[i];
    for (int i=1;i<=n;i++) {
        for (int j=1;j<i;j++) {
            if (arr[i]>arr[j] && dp[i]<dp[j]+arr[i]) {
                dp[i] = dp[j] + arr[i];
            }
        }
        for (int j=1;j<=n;j++) {
            ans = max(ans, dp[j]);
        }
    }
    cout << ans << endl;
}