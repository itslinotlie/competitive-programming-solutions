// 05/19/2021
// https://codeforces.com/contest/1399/problem/B
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

int t(1), n; ll ans, a, b;
void solve() { ans = 0;
    cin >> n; vector<int> va(n), vb(n);
    for(auto &x:va) cin >> x;
    for(auto &x:vb) cin >> x;
    a = *min_element(va.begin(), va.end());
    b = *min_element(vb.begin(), vb.end());
    REP(i, n) ans+=max(va[i]-a, vb[i]-b);
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}