// 10/07/2020
// https://dmoj.ca/problem/avatarbalance
#include<bits/stdc++.h>
using namespace std;
const int mxn = 11;

int n, ans = 0x3f3f3f3f, a[mxn];
void fun(int l, int r, int idx) {
    if(idx==n+1) {
        ans = min(ans, abs(l-r));
        return;
    }
    fun(l+a[idx], r, idx+1);
    fun(l, r+a[idx], idx+1);
}
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    fun(a[0], 0, 1); fun(0, a[0], 1);
    cout << ans << "\n";
}