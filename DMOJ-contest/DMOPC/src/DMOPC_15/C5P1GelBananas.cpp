// 09/25/2020
// https://dmoj.ca/problem/dmopc15c5p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, x, z;
ll gcd(ll c, ll d) {
    return d==0? c:gcd(d, c%d);
}
ll lcm(ll c, ll d) {
    if(!c || !d) return 0;
    return (c*d)/gcd(c, d);
}
int main() {
    cin >> a >> b >> x;
    z = lcm(a, b);
    cout << (x-1)/z + 1 << "\n";
}