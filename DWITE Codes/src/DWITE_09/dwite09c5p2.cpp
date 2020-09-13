// 07/26/2020
// https://dmoj.ca/problem/dwite09c5p2
#include<bits/stdc++.h>
using namespace std;

int x, l, r, ll, rr, d1, d2;
bool isPrime(int k) {
    for (int i=2;i<=sqrt(k);i++) {
        if(k%i==0) return false;
    } return true;
}
int up(int k) {
    for (int i=k;;i++) {
        if(isPrime(i)) return i;
    }
}
int down(int k) {
    for (int i=k;i>=2;i--) {
        if(isPrime(i)) return i;
    }
}
int main() {
    for (int i=0;i<5;i++) {
        cin >> x;
        l = up(x+1); r = down(x-1);
        ll = up(l+1); rr = down(r-1);
        d1 = abs(x-ll); d2 = abs(x-rr);
        if(d1<=d2) cout << ll << endl;
        else cout << rr << endl;
    }
}