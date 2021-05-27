// 10/05/2020
// https://dmoj.ca/problem/tle16c8p1
#include<bits/stdc++.h>
using namespace std;

string s, x; int t;
int main() {
    cin >> s >> t;
    while(t--) {
        cin >> x; bool flag = true;
        for (int i=1;i<s.length();i++) {
            bool in = false;
            for (int j=1;j<x.length();j++) {
                if(s[i]==x[j]) in = true;
            }
            if(!in) flag = false;
        }
        flag? cout<<"yes\n":cout<<"no\n";
    }
}