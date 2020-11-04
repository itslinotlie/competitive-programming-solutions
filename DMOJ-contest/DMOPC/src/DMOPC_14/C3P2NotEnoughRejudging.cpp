// 11/04/2020
// https://dmoj.ca/problem/dmopc14c3p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int n, wa, ir, a, b; string s[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s[i];
        if(s[i]=="WA") wa++;
        if(s[i]=="IR") ir++;
    }
    for (int i=1;i<=n;i++) {
        if(s[i]=="AC") puts("AC");
        else if(s[i]=="TLE") puts("WA");
        else if(s[i]=="WA") {
            if(a+1<=0.3*wa) puts("AC"), a++;
            else puts("WA");
        } else {
            if(b+1<=10) puts("AC");
            else if(b+1<=20) puts("WA");
            else puts("IR");
            b++;
        }
    }
}