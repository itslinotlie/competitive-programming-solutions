// 09/09/2020
// https://dmoj.ca/problem/acmtryouts3b
#include<bits/stdc++.h>
using namespace std;

int t, cnt; string s;
int main() {
    cin >> t; cin.ignore();
    while(t--) {
        getline(cin, s); cnt = 1;
        for (int i=1;i<s.size();i++) {
            if(s[i-1]=='<' && s[i]=='3') cnt++;
        }
        for (int i=1;i<=cnt;i++) cout << "<3 ";
        cout << "\n";
    }
}