// 09/22/2020
// https://dmoj.ca/problem/coci09c4p1
#include<bits/stdc++.h>
using namespace std;

string s, ans;
int main() {
    getline(cin, s); ans+=s[0];
    for (int i=1;i<s.length();i++) {
        if(s[i]=='-') ans+=s[i+1];
    }
    cout << ans << endl;
}