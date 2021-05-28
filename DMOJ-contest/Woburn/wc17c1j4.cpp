// 09/24/2020
// https://dmoj.ca/problem/wc17c1j4
#include<bits/stdc++.h>
using namespace std;

string s; bool a[3];
int main() {
    cin >> s;
    for (int i=0;i<s.size();i++) {
        if(s[i]=='o') a[0] = true;
        if(s[i]=='u' && a[0]) a[1] = true;
        if(s[i]=='r' && a[1]) a[2] = true;
    }
    a[2]? cout<<"Y\n":cout<<"N\n";
}