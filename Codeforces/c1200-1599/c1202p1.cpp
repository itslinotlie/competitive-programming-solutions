// 11/06/2020
// https://codeforces.com/contest/1202/problem/A
#include<bits/stdc++.h>
using namespace std;

int t, x, y; string a, b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> b >> a;
        x = 0;
        while(a[a.size()-x-1]!='1') x++;
        y = x;
        while(b[b.size()-y-1]!='1') y++;
        cout << y - x << endl;
    }
}