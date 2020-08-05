// 08/05/2020
// https://dmoj.ca/problem/coci06c2p2
#include<bits/stdc++.h>
using namespace std;

int a[3]; char x[3];
int main() {
    scanf("%d %d %d %s", &a[0], &a[1], &a[2], &x);// getline(cin, x); getline(cin, x);
    sort(a, a+3);
    for (int i=0;i<3;i++) printf("%d ", a[x[i]-'A']);
    printf("\n");
}
