// 02/17/2021
// https://dmoj.ca/problem/ccc21s2
#include<bits/stdc++.h>
using namespace std;

int r, c, k; map<int, int> x, y; long long ans, sumX, sumY;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c >> k;
    for(int i=1;i<=k;i++) {
        char ch; int val;
        cin >> ch >> val;
        if(ch=='R') x[val]++;
        else y[val]++;
    }
    for(auto &a:x) {
        a.second=a.second%2;
        sumX+=a.second;
    }
    for(auto &b:y) {
        b.second=b.second%2;
        sumY+=b.second;
    }
    ans = sumX*c + sumY*r - 2*sumX*sumY;
    cout << ans << endl;
}