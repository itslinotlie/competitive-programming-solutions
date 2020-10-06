// 10/03/2020
// https://dmoj.ca/problem/b2
#include<bits/stdc++.h>
using namespace std;

int t, sum; string a, b, c;
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b;
        reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
        sum = stoi(a) + stoi(b);
        c = to_string(sum);
        reverse(c.begin(), c.end());
        cout << c << "\n";
    }
}