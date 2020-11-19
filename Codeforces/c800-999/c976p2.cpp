// 10/05/2020
//https://codeforces.com/contest/976/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, k, x, y;
int main() {
    cin >> n >> m >> k;
    if(k<n) {cout << 1+k << " " << 1 << endl; return 0;}
    x = (k-n)/(m-1);
    y = (k-n)%(m-1);
    if(x%2) {
        cout << (n-x) << " " << (m-y) << endl;
    } else {
        cout << (n-x) << " " << (y+2) << endl;
    }
}