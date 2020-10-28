// 10/08/2020
// https://codeforces.com/contest/420/problem/A
#include<bits/stdc++.h>
using namespace std;

string s; vector<char> a = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
int main() {
    //AHIMOTUVWXY
    cin >> s;
    for (int i=0;i<s.length();i++) {
        bool in = true;
        for (int j=0;j<a.size();j++) {
            if(s[i]==a[j]) in = false;
        }
        if(in) {puts("NO"); return 0;}
    }
    for (int i=0;i<s.length()/2;i++) {
        if(s[i]!=s[s.length()-i-1]) {puts("NO"); return 0;}
    }
    puts("YES"); 
}