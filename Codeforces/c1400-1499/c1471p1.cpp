// 02/03/2021
// https://codeforces.com/contest/1471/problem/A
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
const int mxn = 1e5+5;

int t(1), n, x, a[mxn]; ll lo, hi, sum;
void solve() {
    cin >> n >> x; lo = hi = sum = 0;
    FOR(i, n) {
        cin >> a[i];
        sum+=a[i];
        hi+=(a[i]+x-1)/x;
    } lo = (sum+x-1)/x;
    cout << lo << " " << hi << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}