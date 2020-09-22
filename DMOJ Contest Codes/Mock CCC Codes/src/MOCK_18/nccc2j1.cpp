// 09/22/2020
// https://dmoj.ca/problem/nccc2j1
#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
    getline(cin, s);
    if(s[0]-'0'+s[4]-'0'==s[8]-'0') puts("True");
    else puts("False");
}