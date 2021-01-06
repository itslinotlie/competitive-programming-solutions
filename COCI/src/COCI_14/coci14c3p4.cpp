// 07/11/2020
// https://dmoj.ca/problem/coci14c3p4
#include<bits/stdc++.h>
using namespace std;
const int lmt = 651, mx = 5e5 + 2;

int n, psa[652][652], a[mx], b[mx];
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d%d", &a[i], &b[i]);
        a[i]++; b[i]++;
        psa[a[i]][b[i]]++;
    }
    for (int i=1;i<=lmt;i++) {
        for (int j=1;j<=lmt;j++) {
            psa[i][j]+=psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1];
        }
    }
    for (int i=1;i<=n;i++) {
        // hi = (y+1, x+1) to (lmt, lmt)
        // lo = (y-1, x-1) to (1, 1)
        // edge case when x || y == 650 
        int x = a[i], y = b[i];
        int hi = psa[lmt][lmt] - psa[x][lmt]- psa[lmt][y] + psa[x][y];
        int lo = psa[x-1][y-1];
        if(x==lmt) lo+=psa[1][y]-psa[1][y-1];
        if(y==lmt) lo+=psa[x][1]-psa[x-1][1];
        printf("%d %d\n", hi+1, n-lo);
    }
}