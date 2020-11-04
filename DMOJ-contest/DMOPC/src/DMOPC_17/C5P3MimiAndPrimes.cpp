// 10/31/2020
// https://dmoj.ca/problem/dmopc17c5p3
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; ll x, ans(1);
ll gcd(ll a, ll b) {
    return b==0? a:gcd(b, a%b);
}
ll prime(ll a) {
    ll b = a, ans = b;
    for (int i=2;i<=sqrt(a);i++) {
        if(b%i==0) ans = prime(i);
        while(b%i==0) b/=i;
    }
    return max(ans, b);
}
int main() {
    cin >> n >> ans;
    for (int i=2;i<=n;i++) {
        cin >> x;
        ans = gcd(ans, x);
    }
    if(prime(ans)==1) puts("DNE");
    else cout << prime(ans) << "\n";
}