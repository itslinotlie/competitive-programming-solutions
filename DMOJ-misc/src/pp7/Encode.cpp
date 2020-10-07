// 08/22/2020
// https://dmoj.ca/problem/encode
#include<bits/stdc++.h>
using namespace std;

int n; string s;
char lo(char x) {
    int id = x-'a';
    id=(id-n+26)%26;
    return id+'a';
}
char hi(char x) {
    int id = x-'A';
    id=(id-n+26)%26;
    return (id+'A');
}
int main() {
    cin >> n; getline(cin, s); getline(cin, s);
    while(n<0) n+=26;
    n%=26;
    for (int i=0;i<s.size();i++)  {
        if('a'<=s[i] && s[i]<='z') { //lower
            cout<<lo(s[i]);
        } else if('A'<=s[i] && s[i]<='Z') { //upper
            cout<<hi(s[i]);
        } else cout << " ";
    }
    cout << endl;
}