// 07/02/2020
// https://dmoj.ca/problem/dmopc14c4p3
#include<bits/stdc++.h>
using namespace std;

int c, r, x, y, arr[1002][1002], dp[1002][1002];
int main() {
    cin >> r >> c;
    memset(dp, 0x3f, sizeof(dp)); dp[0][1] = dp[1][0] = 0;
    for (int i=1;i<=c;i++) {
        for (int j=1;j<=r;j++) {
            cin >> arr[i][j];
        }
    }
    for (int T=1;T<=100;T++) {
        for (int i=1;i<=c;i++) {
            for (int j=1;j<=r;j++) {
                dp[i][j] = arr[i][j] + min(dp[i][j+1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
    }
    cin >> x >> y;
    cout << dp[y+1][x+1] << endl;
}