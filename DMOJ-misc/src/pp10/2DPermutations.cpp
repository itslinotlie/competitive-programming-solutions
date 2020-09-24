// 08/15/2020
// https://dmoj.ca/problem/2dperm
#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e3;

int n, m, q, dif[mxn*mxn+5]; 
int main() {
    scanf("%d%d%d", &n, &m, &q);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            int lo = i*j, hi = n*m - (n-i+1)*(m-j+1) + 1;
            dif[lo]++; dif[hi+1]--;
        }
    }
    for (int i=1;i<=mxn*mxn;i++) dif[i]+=dif[i-1];
    for (int i=1,x;i<=q;i++) scanf("%d", &x), printf("%d\n", dif[x]);
}