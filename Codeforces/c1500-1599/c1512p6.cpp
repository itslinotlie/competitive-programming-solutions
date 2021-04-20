// 04/12/2021
// https://codeforces.com/contest/1512/problem/F
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 2e5+5;

int t(1), n, c, a[mxn], b[mxn];
void solve() {
    cin >> n >> c;
    FOR(i, n) cin >> a[i];
    FOR(i, n-1) cin >> b[i];
    ll ans = 1e18, cur = 0, bal = 0;
    FOR(i, n) {
        ans = min(ans, cur+max(0LL, c-bal+a[i]-1)/a[i]);
        ll x = max(0LL, b[i]-bal+a[i]-1) / a[i];
        cur+=x+1;
        bal+=a[i]*x-b[i];
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}