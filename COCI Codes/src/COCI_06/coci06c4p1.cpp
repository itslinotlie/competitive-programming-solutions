// 08/05/2020
// https://dmoj.ca/problem/coci06c4p1
#include<bits/stdc++.h>
using namespace std;

int n, r, c; double mx;
int main() {
    scanf("%d %d %d", &n, &r, &c);
    mx = sqrt(r*r+c*c);
    for (int i=1, x;i<=n;i++) {
        scanf("%d", &x);
        printf("%s\n", x<=mx? "DA":"NE");
    }
}