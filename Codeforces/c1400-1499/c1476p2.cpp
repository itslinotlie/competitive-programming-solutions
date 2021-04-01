// 02/02/2021
// https://codeforces.com/contest/1476/problem/B
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
const int mxn = 1e2+2, MM = 1e9;

ll t(1), n, k, a[mxn], x, sum;
void solve() {
    cin >> n >> k;
    FOR(i, n) cin >> a[i];
    x = 0; sum = a[1];
    for(int i=2;i<=n;i++) {
        x = max(x, (100ll*a[i]-k*sum+k-1)/k);
        sum+=a[i];
    }
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}