// 09/27/2020
// https://codeforces.com/contest/1417/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, t, T, a[mxn], ans[mxn]; vector<int> c, d; map<int, int> x, y;
int main() {
    cin >> T; 
    while(T--) {
        cin >> n >> t; memset(a, 0, sizeof(a));
        c.clear(); d.clear(); memset(ans, 0, sizeof(ans));
        x.clear(); y.clear();
        for (int i=1;i<=n;i++) cin >> a[i];
        for (int i=1;i<=n;i++) {
            if(x.empty()) ans[i] = 0, x[a[i]]++;
            else if(x[t-a[i]]==0) ans[i] = 0, x[a[i]]++;
            else if(y[t-a[i]]==0) ans[i] = 1, y[a[i]]++;
            else if(x[t-a[i]]<y[t-a[i]]) ans[i] = 0, x[a[i]]++;
            else ans[i] = 1, y[a[i]]++;
        }
        for (int i=1;i<=n;i++) cout << ans[i] << " "; cout << endl;
    }
}