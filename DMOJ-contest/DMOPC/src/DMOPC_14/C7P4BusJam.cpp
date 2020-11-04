// 08/11/2020
// https://dmoj.ca/problem/dmopc14c6p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3 + 5;

int n, m, h, a[mxn], ans;
int main() {
    scanf("%d%d%d", &n, &m, &h);
    for (int i=n;i>=1;i--) scanf("%d", &a[i]);
    for (int i=2;i<=n;i++) {
        while(a[i-1]-a[i]>h) {
            a[i]+=m; ans++;
        }
    }
    printf("%d\n", ans);
}