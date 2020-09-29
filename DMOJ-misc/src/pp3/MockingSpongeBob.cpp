// 08/31/2020
// https://dmoj.ca/problem/mockingspongebob
#include<bits/stdc++.h>
using namespace std;

int n; string s; bool ans;
bool letter(char x) {
    return ('a'<=x && x<='z') || ('A'<=x && x<='Z');
}
int main() {
    cin >> n; getline(cin, s);
    for (int i=1;i<=n;i++) {
        getline(cin, s); ans = false;
        for (int j=0;j<s.size();j++) {
            if(letter(s[j])) {
                if(ans) cout<<(char)toupper(s[j]);
                else cout<<(char)tolower(s[j]);
                ans=!ans;
            } else cout<<s[j];
        }
        cout<<endl;
    }
}