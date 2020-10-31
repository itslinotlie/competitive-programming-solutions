// 07/06/2020
// https://dmoj.ca/problem/fts
#include<bits/stdc++.h>
using namespace std;

int n, dp[(int)1e6+1];
string x;
int main() {
    cin >> n; getline(cin , x); getline(cin, x);
    memset(dp, 0x3f, sizeof(dp)); dp[0] = 0;
    for (int i=1;i<=n;i++) {
        if (x[i-1]=='0') dp[i] = dp[i-1];
        else {
            if(i==1) dp[i] = 1;
            else if(x[i-2]=='1') {
                dp[i] = dp[i-1];
            }
            else dp[i] = dp[i-1] + 1;
        }
    }
    if (x[0]=='1') cout << 2*dp[n]-1 << endl;
    else cout << 2*dp[n] << endl;
}