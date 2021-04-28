// 07/30/2020
// https://dmoj.ca/problem/apio10p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6;
typedef long long ll;

ll a, b, c, n, psa[mxn+2], dp[mxn+2], point;
ll sum(ll x) {
    return a*x*x + b*x + c;
}
int main() {
    scanf("%lld\n%lld %lld %lld", &n, &a, &b, &c);
    for (int i=1;i<=n;i++) 
        scanf("%lld", &psa[i]), psa[i]+=psa[i-1];
    memset(dp, -0x3f, sizeof(dp)); dp[0] = 0;
    for (int i=1;i<=n;i++) {
        for (int j=point;j<i;j++) {
            ll x = sum(psa[i]-psa[j])+dp[j];
            if(x>dp[i]) 
                dp[i] = x, point = j;
        }
    }
    printf("%lld\n", dp[n]);
}