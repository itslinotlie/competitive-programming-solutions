// 08/28/2020
// https://dmoj.ca/problem/tle16c6s3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e3+5;
#define lft 0
#define rit 1
#define x first
#define y second
typedef long long ll;
typedef pair<int, int> pii;

int n; ll dp[mxn][mxn][2], psa[mxn], ans; pii a[mxn];
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) scanf("%d%d", &a[i].x, &a[i].y);
    sort(a+1, a+1+n);
    for (int i=1;i<=n;i++) {
        psa[i]=psa[i-1]+a[i].y;
        if(!a[i].x) dp[i][i][lft]=dp[i][i][rit]=a[i].y;
    }
    for (int len=1;len<n;len++) {
        for (int l=1;l+len<=n;l++) {
            int r = l+len;
            if(dp[l+1][r][lft] >= a[l+1].x - a[l].x)
                dp[l][r][lft]=max(dp[l][r][lft], dp[l+1][r][lft]+a[l].y-(a[l+1].x-a[l].x));
            if(dp[l+1][r][rit] >= a[r].x - a[l].x)
                dp[l][r][lft]=max(dp[l][r][lft], dp[l+1][r][rit]+a[l].y-(a[r].x-a[l].x));
            if(dp[l][r-1][rit] >= a[r].x - a[r-1].x)
                dp[l][r][rit]=max(dp[l][r][rit], dp[l][r-1][rit]+a[r].y-(a[r].x-a[r-1].x));
            if(dp[l][r-1][lft] >= a[r].x - a[l].x)
                dp[l][r][rit]=max(dp[l][r][rit], dp[l][r-1][lft]+a[r].y-(a[r].x-a[l].x));
        }
    }
    for (int i=1;i<=n;i++) 
        for (int j=1;j<=n;j++) 
            if(dp[i][j][0] || dp[i][j][1]) 
                ans = max(ans, psa[j]-psa[i-1]);
    printf("%lld\n", ans);
}