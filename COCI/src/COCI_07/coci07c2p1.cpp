// 08/05/2020
// https://dmoj.ca/problem/coci07c2p1
#include<bits/stdc++.h>
using namespace std;

int a[6], b[6] = {1, 1, 2, 2, 2, 8};
int main() {
    for (int i=0;i<6;i++) scanf("%d", &a[i]);
    for (int i=0;i<6;i++) printf("%d ", b[i]-a[i]);
    printf("\n");
}