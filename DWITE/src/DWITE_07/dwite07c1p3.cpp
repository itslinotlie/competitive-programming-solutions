// 09/01/2020
// https://dmoj.ca/problem/dwite07c1p3
#include<bits/stdc++.h>
using namespace std;

string s; 
string d = "`1234567890[]',.pyfgcrl/=\\aoeuidhtns-;qjkxbmwvz~!@#$%^&*(){}\"<>PYFGCRL?+|AOEUIDHTNS_:QJKXBMWVZ ";
string q = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
int main() {
    getline(cin, s);
    for (int i=0;i<s.size();i++) cout<<q[d.find(s[i])]; cout<<endl;
}