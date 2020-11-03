// 10/11/2020
// https://codeforces.com/contest/698/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 105;

int n, a[mxn], dp[3][mxn];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++) {
        dp[0][i] = max(dp[0][i-1],  max(dp[1][i-1], dp[2][i-1]));
        if(a[i]%2) dp[1][i] = 1 + max(dp[0][i-1], dp[2][i-1]);
        if(a[i]>1) dp[2][i] = 1 + max(dp[0][i-1], dp[1][i-1]);
    }
    int maxi = max(dp[0][n], max(dp[1][n], dp[2][n]));
    cout << n - maxi << "\n";
}