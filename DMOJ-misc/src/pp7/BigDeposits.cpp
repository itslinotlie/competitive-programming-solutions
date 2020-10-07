// 09/10/2020
// https://dmoj.ca/problem/bdep
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
const ll MM = 1e16;

ll p, y, t;
bool check(ll x) { //p = interest, y = years, wants t = amount
    ll sum = 0;
    for (int i=1;i<=y;i++) {
        sum = (sum+x)*p/100;
        if(sum>=t) return true;
    }
    return sum>=t;
}
int main() {
    cin >> p >> y >> t; p+=100;
    ll lo = 1, hi = MM;
    while(lo<=hi) {
        ll md = hi - (hi-lo)/2;
        if(check(md)) hi = md - 1;
        else lo = md + 1;
    } 
    cout << lo << "\n";
}