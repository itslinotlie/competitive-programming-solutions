// 10/05/2020
// https://codeforces.com/contest/250/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 105;

int n, cnt, neg, a[mxn]; vector<int> vec;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        if(a[i]<0) {
            if(neg==2) {
                vec.push_back(cnt); cnt = 0; neg = 0;
            }
            neg++;
        }
        cnt++;
    }
    vec.push_back(cnt);
    cout << vec.size() << endl;
    for (auto x:vec) cout << x << " "; cout << endl;
}