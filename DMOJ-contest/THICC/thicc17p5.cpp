// 08/03/2020
// https://dmoj.ca/problem/thicc17p5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5, mv = 1e6;

int n, k, a[mxn+2], frq[mv+2], cnt; long long ans;
int main() {
    scanf("%d %d", &n, &k);
    for (int i=1;i<=n;i++) scanf("%d", &a[i]);
    for (int l=1, r=1;r<=n;r++) {
        if(frq[a[r]]==0) cnt++;
        frq[a[r]]++;
        while(cnt>=k) {
            if(frq[a[l]]==1) cnt--;
            frq[a[l]]--;
            l++;
        }
        ans+=l-1;
    }
    printf("%lld\n", ans);
}