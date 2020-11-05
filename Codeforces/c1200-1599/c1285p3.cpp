// 11/04/2020
// https://codeforces.com/contest/1285/problem/C
#include<bits/stdc++.h>
using namespace std;

long long x, ans;
long long lcm(long long a, long long b) {
    return a/__gcd(a, b)*b;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> x;
    for (long long i=1;i*i<=x;i++) {
        if(x%i==0 && lcm(i, x/i)==x) ans = i;
    }
    cout << ans << " " << x/ans << endl;
}