// 09/01/2020
// https://dmoj.ca/problem/dwite07c2p2
#include<bits/stdc++.h>
using namespace std;

string s; int ans; bool flag;
int main() {
    for (int i=1;i<=5;i++) {
        cin >> s; flag = true;
        for (int j=0;j<s.size() && ans>=0;j++) {
            s[j]=='+'? ans++:ans--;
        }
        if(ans<0) {puts("OH NOES!"); ans = 0;}
        else {printf("%d\n", ans);}
    }
}