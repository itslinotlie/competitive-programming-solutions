// 06/13/2020
// https://dmoj.ca/problem/dmopc14c3p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, d, ans = 0;
int main() {
    scanf("%d%d%d", &n, &k, &d);
    ans = n;
    for (int i=1;i<=d;i++) ans*=k;
    printf ("%d\n",ans);
}