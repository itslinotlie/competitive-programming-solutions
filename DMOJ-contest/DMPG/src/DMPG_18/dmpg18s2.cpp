// 08/10/2020
// https://dmoj.ca/problem/dmpg18s2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5 + 5;

int n; long long a[mxn], ans;
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%lld", &a[i]);
        a[i]+=a[i-1];
    }
    for(int i=1, l=0, r=n; i<=n; i++, l++, r--){
        ans += a[r] - a[l];
        printf("%lld\n", ans);
    }
}