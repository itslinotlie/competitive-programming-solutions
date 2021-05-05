// 10/04/2020
// https://codeforces.com/contest/1422/problem/A
#include<bits/stdc++.h>
using namespace std;

int t; long long a, b, c, x, maxi;
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        x = max(max(0LL, b-a-c), max(c-a-b, a-b-c));
        cout << x + 1 << endl;
    }
}