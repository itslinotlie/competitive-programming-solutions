// 08/15/2020
// https://dmoj.ca/problem/dwite10c5p1
#include<bits/stdc++.h>
using namespace std;

string s, clr, res; bool rgb[3];
int num(char x) {
    if(x=='r') return 0;
    if(x=='g') return 1;
    return 2;
}
void find() {
    memset(rgb, false, sizeof(rgb));
    for (int i=0;i<res.size();i++) {
        if(i%2==1) continue;
        rgb[num(res[i])] = true;
    }
}
int main() {
    for (int T=1;T<=5;T++) {
        cin >> s >> clr >> res;
        find();
        for (int i=0;i<s.size();i++) {
            if(rgb[num(clr[i])]) cout << "_";
            else cout << s[i];
        } cout << endl;
    }
}