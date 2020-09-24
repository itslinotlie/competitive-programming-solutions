// 07/02/2020
// https://dmoj.ca/problem/inaho4
#include<bits/stdc++.h>
using namespace std;

double n, ans, a[1001], b[1001];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++) cin >> b[i];
    for (int i=1;i<=n;i++) ans+=(b[i]-a[i])*(b[i]-a[i]);
    printf("%.7g\n", sqrtf(ans));
}