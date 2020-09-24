// 06/29/2020
// https://dmoj.ca/problem/dmopc15c6p3
#include<bits/stdc++.h>
using namespace std;

int n, m, arr[200003]; long w;
int main() {
    scanf("%d%d%ld", &n, &m, &w);
    for (int i=1,a,b;i<=m;i++) {
        scanf("%d%d", &a, &b);
        arr[a]--; arr[b+1]++;
    }
    arr[0] = m;
    for (int i=1;i<=m;i++) arr[i]+=arr[i-1];
    int L=1, R=1, MN = 0x3f3f3f3f; long cur = 0;
    for (;L<=R && R<=n;R++) {
        cur+=arr[R];
        while(cur>=w) {
            MN = min(MN, R-L+1);
            cur-=arr[L]; L++;
        }
    }
    printf(MN==0x3f3f3f3f? "-1\n":"%d\n", MN);
}