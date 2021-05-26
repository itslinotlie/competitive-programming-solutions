// 09/04/2020
// https://codeforces.com/contest/1409/problem/B
#include<bits/stdc++.h>
using namespace std;
 
int t; long long a, b, x, y, n, n2, n3, d1, d2, m1, m2, ans;
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b >> x >> y >> n; ans = 0x3f3f3f3f3f3f3f3f;
        d1 = a-x; d2 = b-y;
        if(d1+d2<=n) {
            cout << x*y << endl;
            continue;
        }
        if(n>=d1) ans = min(ans, x*(b-(n-d1)));
        if(n>=d2) ans = min(ans, y*(a-(n-d2)));
        int mn = min(max(x, a-n), max(y, b-n));
        d2 = max(n-(a-x), (long long)0);
        ans = min(ans, max(x, a-n)*max(y, b-d2));
        d1 = max(n-(b-y), (long long)0);
        ans = min(ans, max(y, b-n)*max(x, a-d1));
        cout << ans << endl;
    }
}