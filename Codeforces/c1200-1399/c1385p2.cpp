// 07/17/2020
// https://codeforces.com/contest/1385/problem/B
#include<bits/stdc++.h>
using namespace std;
 
int t, n, a[104];
vector<int> v1, v2;
int main() {
    cin >> t;
    for (int i=1;i<=t;i++) {
        cin >> n; v1.clear(); v2.clear();
        for (int i=1;i<=2*n;i++) {
            cin >> a[i];
            bool in = true;
            for (auto x:v1) {
                if(x==a[i]) {in = false; break;}
            } 
            if(in) v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }
        for (auto x:v1) {
            cout << x << " ";
        } cout << endl;
    }
 }