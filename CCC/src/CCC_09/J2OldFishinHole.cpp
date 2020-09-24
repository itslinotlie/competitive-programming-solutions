// 07/14/2020
// https://dmoj.ca/problem/ccc09j2
#include<bits/stdc++.h>
using namespace std;

int a, b, c, x, ans;
int main() {
    scanf("%d%d%d%d", &a, &b, &c, &x);
    for (int i=0;i<=250;i++) {
        for (int j=0;j<=250;j++) {
            for (int k=0;k<=250;k++) {
                if(i==0 && j==0 && k==0) continue;
                if (i*a+j*b+k*c<=x) {
                    printf("%d Brown Trout, %d Northern Pike, %d Yellow Pickerel\n", i, j, k);
                    ans++;
                }
            }
        }
    }
    printf("Number of ways to catch fish: %d\n", ans);
}