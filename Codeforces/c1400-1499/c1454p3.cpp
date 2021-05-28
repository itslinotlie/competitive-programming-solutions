// 04/30/2021
// https://codeforces.com/contest/1454/problem/C
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

int t(1), n;
void solve() {
    cin >> n;
    vector<int> a(n), res(n+1, 1);
    for (auto &x: a) cin >> x;
    n = unique(a.begin(), a.end()) - a.begin();
    a.resize(n);
    REP(i, n) res[a[i]]++;
    res[a[0]]--; res[a[n-1]]--;
    int ans = 1e9;
    REP(i, n) ans = min(ans, res[a[i]]);
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}