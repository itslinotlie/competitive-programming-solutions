// 07/11/2020
// https://dmoj.ca/problem/ecoo15r1p1
#include<bits/stdc++.h>
using namespace std;

string x; map<string, int> mp; int ans;
int main() {
    for (int t=1;t<=10;t++) {
        getline(cin, x); mp.clear(); ans = 0;
        while(x!="end of box") {
            mp[x]++;
            getline(cin, x);
        }
        for (auto x: mp) {
            int amt = (int)((double)x.second / (double)7 + 0.999999);
            if(x.first!="red") ans += amt*13;
            else ans += x.second*16;
        }
        cout << ans << endl;
    }
}