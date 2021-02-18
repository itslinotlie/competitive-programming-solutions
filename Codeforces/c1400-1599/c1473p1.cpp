// 02/10/2021
// https://codeforces.com/contest/1473/problem/A
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

int t(1), n, k, a[mxn];
void solve() {
    cin >> n >> k;
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    if(a[0]+a[1]<=k || a[n-1]<=k) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}