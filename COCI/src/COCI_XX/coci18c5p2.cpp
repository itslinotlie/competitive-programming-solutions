// 11/05/2020
// https://dmoj.ca/problem/coci18c5p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, a[mxn], b[mxn], ans; map<int, int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++) cin >> b[i];
    for (int i=1;i<=n;i++) mp[a[i]-b[i]]++;
    for (auto x:mp) ans = max(ans, x.second);
    cout << ans << "\n";
}