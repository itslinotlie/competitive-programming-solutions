// 03/08/2021
// https://codeforces.com/contest/1360/problem/B
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
const int mxn = 55;

int t(1), n, a[mxn], mx;
void solve() {
    cin >> n; mx = 0x3f3f3f3f;
    FOR(i, n) cin >> a[i];
    sort(a+1, a+1+n);
    FOR(i, n-1) mx = min(mx, abs(a[i]-a[i+1]));
    cout << mx << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}