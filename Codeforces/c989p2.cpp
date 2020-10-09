// 10/05/2020
//https://codeforces.com/contest/989/problem/B
#include<bits/stdc++.h>
using namespace std;

int n, p; string s;
bool fun(char a, char b) {
    int x = (a=='.') + (b=='.');
    return x>=1 || a!=b;
}
void printy() {
    for (int i=0;i<n;i++) {
        if(s[i]=='.') cout << "0";
        else cout << s[i];
    } cout << endl;
}
void printy2(int i, char c) {
    for (int j=0;j<n;j++) {
        if(j==i) cout << c;
        else if(s[j]=='.') cout << "0";
        else cout << s[j];
    } cout << endl;
}
int main() {
    cin >> n >> p >> s;
    for (int i=0;i<n-p;i++) {
        if(fun(s[i], s[i+p])) {
            if(s[i]==s[i+p] && s[i]!='.') {
                printy();
            }
            else if(s[i]=='.' && s[i+p]=='.') {
                printy2(i, '1');
            }
            else {
                if(s[i]=='.') {
                    if(s[i+p]=='0') printy2(i, '1');
                    else printy2(i, '0');
                } else {
                    if(s[i]=='0') printy2(i+p, '1');
                    else printy2(i+p, '0');
                }
            }
            return 0;
        }
    }
    puts("No");
}