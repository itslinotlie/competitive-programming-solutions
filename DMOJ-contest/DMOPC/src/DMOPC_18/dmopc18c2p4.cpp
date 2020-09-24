// 07/29/2020
// https://dmoj.ca/problem/dmopc18c2p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e5;
typedef long long ll;

int n; ll m, a[mxn+2], ans = 0x3f3f3f3f, sum; 
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> a[i];
    int L=1, R=1;
    for (;R<=n;R++) {
        sum+=a[R];
        while(sum>=m) {
            ans = min(ans, (ll)R-L+1);
            sum-=a[L]; L++;
        }
    }
    ans==0x3f3f3f3f? printf("-1\n"):printf("%lld\n", ans);
}