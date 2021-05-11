// 02/17/2021
// https://dmoj.ca/problem/ccc21s1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+4;

int n, h[mxn], w[mxn]; double ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=1;i<=n+1;i++) cin >> h[i];
    for(int i=1;i<=n;i++) cin >> w[i];
    for(int i=1;i<=n;i++) {
        double h2 = (h[i]+h[i+1])/2.0;
        ans+=h2*w[i];
    }
    cout << setprecision(1) << fixed << ans << endl;
}