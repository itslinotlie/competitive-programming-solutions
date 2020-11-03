// 10/08/2020
// https://codeforces.com/contest/915/problem/B
#include<bits/stdc++.h>
using namespace std;

int n, p, l, r;
int main() {
    cin >> n >> p >> l >> r;
    if(l==1 && r==n) cout << 0 << endl;
    else if(l==1 && r!=n) cout << abs(p-r) + 1 << endl;
    else if(l!=1 && r==n) cout << abs(p-l) + 1 << endl;
    else cout << r - l + min(abs(p-l), abs(p-r)) + 2 << endl;
}