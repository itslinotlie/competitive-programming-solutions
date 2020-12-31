// 09/22/2020
// https://dmoj.ca/problem/coci09c3p1
#include<bits/stdc++.h>
using namespace std;

string a, b;
int main() {
    cin >> a >> b;
    reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
    a>b? cout << a << "\n": cout << b << "\n";
}