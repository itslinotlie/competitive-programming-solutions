// 02/07/2021
// https://codeforces.com/contest/1042/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
const int mxn = 1e2+2;

int n, m, a[mxn], mn, mx, lo, hi;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, n) cin >> a[i], mx = max(mx, a[i]);
    hi = mx+m;
    FOR(i, n) {
        if(m>0) m = max(0, m-(mx-a[i]));
    }
    if(m==0) cout << mx << " " << hi << endl;
    else {
        cout << mx+(m+n-1)/n << " " << hi << endl;
    }
}