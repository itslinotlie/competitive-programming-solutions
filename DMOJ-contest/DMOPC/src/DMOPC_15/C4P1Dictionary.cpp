// 10/28/2020
// https://dmoj.ca/problem/dmopc15c4p1
#include<bits/stdc++.h>
using namespace std;

int n; string s; vector<string> vec[26];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s;
        vec[s[0]-'a'].push_back(s);
    }
    for (int i=0;i<26;i++) {
        sort(vec[i].begin(), vec[i].end());
        string ans = "";
        for (auto x:vec[i]) ans+=x+", ";
        if(ans.size()>0) cout << ans.substr(0, ans.size()-2) << "\n";
    }
}