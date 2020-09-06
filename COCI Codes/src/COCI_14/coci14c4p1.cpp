// 09/04/2020
// https://dmoj.ca/problem/coci14c4p1
#include<bits/stdc++.h>
using namespace std;

string s; int sum; bool zero;
int main() {
    cin >> s;
    for (int i=0;i<s.length();i++) {
        sum+=s[i]-'0';
        if(s[i]=='0') zero = true;
    }
    if(!zero || sum%3) {puts("-1"); return 0;}
    sort(s.rbegin(), s.rend());
    cout << s << endl;
}