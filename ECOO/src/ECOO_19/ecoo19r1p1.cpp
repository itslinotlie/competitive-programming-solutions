// 09/27/2020
// https://dmoj.ca/problem/ecoo19r1p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int n, m, d, cnt, ans, a[mxn];
int main() {
    int T = 10;
    while(T--) {
        cin >> n >> m >> d; ans = 0; memset(a, 0, sizeof(a));
        for (int i=1, x;i<=m;i++) {
            cin >> x;
            a[x]++;
        }
        cnt = n;
        for (int i=1;i<=d;i++) {
            if(cnt<=0) cnt = n, ans++;
            cnt--;
            cnt+=a[i]; n+=a[i];
        }
        cout << ans << "\n";
    }
}