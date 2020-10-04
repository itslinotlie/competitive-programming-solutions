// 09/22/2020
// https://dmoj.ca/problem/coci06c5p1
#include<bits/stdc++.h>
using namespace std;

int x; string s;
int main() {
    cin >> s;
    for (int i=0;i<s.length();i++) {
        if(s[i]=='A') {
            if(x==0) x = 1;
            else if(x==1) x = 0;
        } else if(s[i]=='B') {
            if(x==1) x = 2;
            else if(x==2) x = 1;
        } else {
            if(x==2) x = 0;
            else if(x==0) x = 2;
        }
    }
    cout << x+1 << "\n";
}