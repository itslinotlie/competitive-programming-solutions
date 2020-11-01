// 10/11/2020
// https://codeforces.com/contest/614/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n; string s, front, ans; bool z = false;
void check(string x) {
    if(x.size()==1 && x[0]=='0') z = true;
}
int one(string x) {
    int cnt = 0;
    for (int i=0;i<x.size();i++) {
        if(x[i]=='1') cnt++;
    }
    return cnt;
}
bool odd(string x) {
    for (int i=0;i<x.size();i++) {
        if(x[i]!='0' && x[i]!='1') return true;
    }
    return false;
}
void zero(string x) {
    check(x);
    if(one(x)>1 || odd(x)) {front = x; return;}
    for (int i=0;i<x.size();i++) {
        if(x[i]=='0') ans+='0';
    }
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> s, zero(s);
    if(z) cout << 0 << "\n";
    else {
        if(front=="") cout << 1;
        cout << front << ans << "\n";
    }
}