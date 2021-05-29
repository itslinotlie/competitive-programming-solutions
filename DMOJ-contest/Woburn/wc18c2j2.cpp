// 10/30/2020
// https://dmoj.ca/problem/wc18c2j2
#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
   cin >> s;
   cout << (s[0]-'0')*60 + stoi(s.substr(2, 3)) << "\n";
}