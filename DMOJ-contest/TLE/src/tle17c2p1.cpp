// 10/02/2020
// https://dmoj.ca/problem/tle17c2p1
#include<bits/stdc++.h>
using namespace std;

string s; int cnt;
int main() {
    getline(cin, s);
    for (int i=0;i<s.length();i++) {
        if(s[i]=='a') cout << "(car ", cnt++;
        else if(s[i]=='d') cout << "(cdr ", cnt++;
        else if(s[i]=='x') cout << 'x';
    }
    for (int i=0;i<cnt;i++) cout << ')';
    cout << "\n";
}