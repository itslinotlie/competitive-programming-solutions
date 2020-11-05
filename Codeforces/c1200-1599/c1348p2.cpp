// 10/11/2020
// https://codeforces.com/contest/1348/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e4+5;

int t, n, k, maxi, a[mxn], tmp; set<int> sett; vector<int> vec;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k; maxi = 0; sett.clear(); vec.clear();
        for (int i=1;i<=n;i++) cin >> a[i], sett.insert(a[i]);
        if(k<sett.size()) {puts("-1"); continue;}
        for (int i=1;i<=k-sett.size();i++) vec.push_back(1);
        cout << n*k << "\n";
        for (int i=1;i<=n;i++) {
            for (auto x:sett) cout << x << " ";
            for (auto x:vec) cout << x << " ";
        }
        cout << "\n";
    }
}