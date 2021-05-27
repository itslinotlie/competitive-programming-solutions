// 09/01/2020
// https://dmoj.ca/problem/tle16c8p2
#include<bits/stdc++.h>
using namespace std;

int t, x; string s;
int main() {
    cin >> t;
    while(t--) {
        cin >> x; s.clear();
        if(x==0) {puts("meme"); continue;}
        s = bitset<32>(x).to_string();
        while(s[0]=='0') s = s.substr(1, s.size());
        for (int i=0;i<s.size();i++) {
            s[i]=='1'? cout<<"dank ":cout<<"meme ";
        } puts("");
    }
}