// 08/17/2020
// https://dmoj.ca/problem/wac5p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5 + 5;

int n, q, a[mxn], smx[mxn], smn[mxn];
int main() {
    scanf("%d%d", &n, &q);
    for (int i=1;i<=n;i++) scanf("%d", &a[i]);
    smx[n] = a[n]; smn[n] = a[n];
    smx[0] = 0x3f3f3f3f; smn[0] = -0x3f3f3f3f;
    for (int i=n-1;i>=1;i--) {
        smx[i] = max(a[i], smx[i+1]); 
        smn[i] = min(a[i], smn[i+1]);
    }
    reverse(smx+1, smx+1+n);
    for (int i=1, x, y;i<=q;i++) {
        scanf("%d%d", &x, &y);
        int lo = x-y, hi = x+y;
        auto up = upper_bound(smx+1, smx+1+n, hi);
        auto dn = lower_bound(smn+1, smn+1+n, lo);
        cout << min(up-smx-1, n-(dn-smn-1)) << endl;
    }
}