// 04/02/2021
// https://codeforces.com/contest/1486/problem/B
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

int t(1), n; vector<int> x, y;
void solve() {
    cin >> n; x.resize(n); y.resize(n);
    REP(i, n) cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ll row = x[x.size()/2] - x[(x.size()-1)/2] + 1;
    ll col = y[y.size()/2] - y[(y.size()-1)/2] + 1;
    cout << 1LL * row * col << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}