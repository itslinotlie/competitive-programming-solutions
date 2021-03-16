// 09/03/2020
// https://dmoj.ca/problem/dpj
#include<bits/stdc++.h>
using namespace std;
const int mxn = 3e2+5;

int n, frq[4]; long double dp[mxn][mxn][mxn];
long double fun(int s1, int s2, int s3) {
    if(s1==0 && s2==0 && s3==0) return 0;
    if(dp[s1][s2][s3]>0.0) return dp[s1][s2][s3];

    int t = s1+s2+s3; long double val = n;
    if(s1>0) val += s1*fun(s1-1, s2, s3);
    if(s2>0) val += s2*fun(s1+1, s2-1, s3);
    if(s3>0) val += s3*fun(s1, s2+1, s3-1);
    return dp[s1][s2][s3] = val/t;
}
int main() {
    scanf("%d", &n); 
    for (int i=1, x;i<=n;i++) scanf("%d", &x), frq[x]++;
    printf("%.9Lf\n", fun(frq[1], frq[2], frq[3]));
}