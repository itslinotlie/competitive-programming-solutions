// 08/15/2020
// https://dmoj.ca/problem/btoi19p4
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5+5;

int n, m, k, a[302], b[302], dp[MM], sumA, sumB;
int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i=0;i<n;i++) {
        cin >> a[i]; sumA+=a[i];
        if(a[i]<k) {cout << "Impossible\n"; return 0;}
    }
    memset(dp, -0x3f, sizeof(dp)); dp[0] = 0;
    for (int i=1;i<=m;i++) {
        cin >> b[i]; sumB+=b[i];
        for (int j=sumB;j>=b[i];j--) {
            dp[j] = max(dp[j], dp[j-b[i]]+min(b[i], n));
        }
    }
    for (int i=sumA;i<=sumB;i++) {
        if(dp[i]>=n*k) {cout << i-sumA<<"\n"; return 0;}
    }
    cout << "Impossible\n";
}