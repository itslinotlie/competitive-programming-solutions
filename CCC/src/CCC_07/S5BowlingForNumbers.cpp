// 09/04/2020
// https://dmoj.ca/problem/ccc07s5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 3e4+5, mxk=5e2+5;

int t, n, k, w, psa[mxn], dp[mxk][mxn];
int sum(int l, int r) {
    return psa[r]-psa[l-1];
}
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k >> w;
        memset(psa, 0, sizeof(psa));
        memset(dp, 0, sizeof(dp));
        for (int i=1;i<=n;i++) {
            cin >> psa[i];
            psa[i]+=psa[i-1];
        }
        for (int i=1;i<=k;i++) {
            for (int j=1;j<=n;j++) {
                if (j<w) dp[i][j] = psa[j]; 
                else dp[i][j] = max(dp[i][j-1], dp[i-1][j-w]+sum(j-w+1, j));
            }
        }
        cout << dp[k][n] << endl;
    }
}