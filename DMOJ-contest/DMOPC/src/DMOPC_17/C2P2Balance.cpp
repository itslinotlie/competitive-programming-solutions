// 09/01/2020
#include<bits/stdc++.h>
using namespace std;

string s; stack<char> stk;
int main() {
    cin >> s;
    for (int i=0;i<s.size();i++) {
        if(s[i]=='(') stk.push('(');
        else {
            // if(stk.empty()) return 0 * puts("NO");
            if(stk.size() && stk.top()!=s[i]) stk.pop();
            else stk.push(s[i]);
        }
    }
    puts((stk.size()==0 || stk.size()==2)? "YES":"NO");
}