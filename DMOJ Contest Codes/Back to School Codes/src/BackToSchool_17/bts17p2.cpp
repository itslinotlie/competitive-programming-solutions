// 07/11/2020
// https://dmoj.ca/problem/bts17p2
#include<bits/stdc++.h>
using namespace std;

int n; double a, b, ans = 1;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a >> b;
        ans*=(b-a)/b;
    }
    printf("%.6f\n", ans);
}