// 11/13/2020
// https://codeforces.com/contest/166/problem/A
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
const int mxn = 55;

int n, k, x, y, ans; pii a[mxn];
bool cmp(pii x, pii y) {
    if(x.F==y.F) return x.S < y.S;
    return x.F > y.F;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, n) cin >> a[i].F >> a[i].S;
    sort(a+1, a+1+n, cmp);
    x = a[k].F; y = a[k].S;
    FOR(i, n) if(a[i].F==x && a[i].S==y) ans++;
    cout << ans << "\n";
}