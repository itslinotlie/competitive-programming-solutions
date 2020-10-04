// 09/08/2020
// https://dmoj.ca/problem/coci06c1p5
#include<bits/stdc++.h>
using namespace std;

int n; double dp[1<<20], p[20][20];
double fun(int bond, int mask) {
    if(dp[mask]>=0) return dp[mask];
    if(bond>=n) return 1.0;
    double &ret = dp[mask];
    for (int k=0;k<n;k++) {
        if(!(mask&(1<<k))) ret = max(ret, p[bond][k]*fun(bond+1, mask | (1<<k)));
    }
    return ret;
}
int main() {
    cin >> n;
    fill(dp, dp+(1<<n), -1.0);
    for (int i=0;i<n;i++) {
        for (int j=0, x;j<n;j++) {
            cin >> x;
            p[i][j] = x/100.0;
        }
    }
    double ans = fun(0, 0)*100;
    printf("%.6f\n", ans);
}