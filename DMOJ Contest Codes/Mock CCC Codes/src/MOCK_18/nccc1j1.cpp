// 09/22/2020
// https://dmoj.ca/problem/nccc1j1
#include<bits/stdc++.h>
using namespace std;

int n;
bool zero() {
    string s = to_string(n);
    for (int i=0;i<s.length();i++) {
        if(s[i]=='0') return true;
    }
    return false;
}
int main() {
    cin >> n; n++;
    while(zero()) n++;
    cout << n << "\n";
}