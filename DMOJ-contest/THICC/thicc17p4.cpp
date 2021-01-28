// 08/20/2020
// https://dmoj.ca/problem/thicc17p4
#include<bits/stdc++.h>
using namespace std;

string s, s2; int n, k, len, len2; double val, ans=0x3f3f3f3f;
int work() {
    int dp[len+1][len2+1]; memset(dp, 0, sizeof(dp));
    for (int i=0;i<=len;i++) {
        for (int j=0;j<=len2;j++) {
            if(!i) dp[i][j] = j;
            else if(!j) dp[i][j] = i;
            else if(s[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
        }
    }
    return dp[len][len2];
}
int main() {
    cin >> s >> n; len = s.size();
    for (int i=1;i<=n;i++) {
        cin >> k; val = 0.0;
        for (int j=1;j<=k;j++) {
            cin >> s2; len2 = s2.size();
            val+=work();
        }
        val/=k; ans = min(ans, val);
    }
    printf("%.6f\n", ans);
}