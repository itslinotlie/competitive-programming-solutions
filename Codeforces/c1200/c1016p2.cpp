// 10/08/2020
//https://codeforces.com/contest/1016/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5, seed = 131, MOD = 1e9+9;
typedef long long ll;

int n, m, q; string s, t; ll p[mxn], a[mxn], b[mxn];
inline ll strHash(int l, int r) {
    return (ll)((1LL*a[r] - 1LL*a[l-1]*p[r-l+1]%MOD)+MOD)%MOD;
}
int main() {
    cin >> n >> m >> q >> s >> t;
    p[0] = 1; for (int i=1;i<=max(n, m);i++) p[i] = ((p[i-1]*seed%MOD)+MOD)%MOD;
    for (int i=1;i<=n;i++) a[i] = ((a[i-1]*seed + s[i-1])%MOD+MOD)%MOD;
    for (int i=1;i<=m;i++) b[i] = ((b[i-1]*seed + t[i-1])%MOD+MOD)%MOD;
    for (int i=1, L, R, ans;i<=q;i++) {
        cin >> L >> R; ans = 0;
        for (int j=L;j+m-1<=R;j++) {
            if(strHash(j, j+m-1)==b[m]) ans++;
        }
        cout << ans << "\n";
    }
}