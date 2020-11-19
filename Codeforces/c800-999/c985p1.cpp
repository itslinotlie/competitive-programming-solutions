// 11/06/2020
#include<bits/stdc++.h>
using namespace std;
const int mxn = 105;

int n, x, y; vector<int> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; vec.resize(n/2);
    for(auto &a:vec) cin >> a;
    sort(vec.begin(), vec.end());
    for (int i=0;i<n/2;i++) {
        x+=abs(vec[i]-2*i-1);
        y+=abs(vec[i]-2*i-2);
    }
    cout << min(x, y) << endl;
}