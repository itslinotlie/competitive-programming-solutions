// 10/31/2020
// https://dmoj.ca/problem/dmopc14c2p2
#include<bits/stdc++.h>
using namespace std;

int n, x; string s; vector<int> vec;
int main() {
    cin >> n >> s;
    for (int i=0;i<n;i++) {
        if(s[i]=='X') {
            if(x) vec.push_back(x);
            x = 0;
        } else x++;
    }
    if(x) vec.push_back(x);
    cout << vec.size() << "\n";
    for (auto &a:vec) {
        while(a--) cout << "O"; cout << endl;
    }
}