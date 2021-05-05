// 09/27/2020
// https://codeforces.com/contest/1417/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int t, n, k, mini, idx, ans, a[mxn];
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k; mini = 0x3f3f3f3f;
        memset(a, 0, sizeof(a)); ans = 0;
        for (int i=1;i<=n;i++) {cin >> a[i]; if(a[i]<mini) {mini=a[i]; idx = i;};}
        for (int i=1;i<=n;i++) {
            if(idx==i) continue;
            ans+=floor((double)(k-a[i])/mini);
        }
        cout << ans << "\n";
    }
}