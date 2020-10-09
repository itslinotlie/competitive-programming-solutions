// 10/08/2020
// https://codeforces.com/contest/1165/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5+5;

int n, a[mxn];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+1+n);
    int ans = 1;
    for (int i=1;i<=n;i++) {
        if(a[i]>=ans) ans++;
    }
    cout << ans-1 << "\n";
}