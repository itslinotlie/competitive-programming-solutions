// 09/03/2020
// https://dmoj.ca/problem/dwite09c6p1
#include<bits/stdc++.h>
using namespace std;
#define FOR0(x) for (int i=0;i<x;i++)
#define FOR(x) for (int i=1;i<=x;i++)

string s;
int main() {
    FOR(5) {
        getline(cin, s);
        FOR0(s.length()) {
            if('a'<=s[i] && s[i]<='z') {
                s[i]-='a'; s[i]=(s[i]+13)%26; s[i]+='a';
            }
            else if('A'<=s[i] && s[i]<='Z') {
                s[i]-='A'; s[i]=(s[i]+13)%26; s[i]+='A';
            }
        }
        FOR0(s.length()) cout<<s[i]; 
        cout<<endl;
    }
}