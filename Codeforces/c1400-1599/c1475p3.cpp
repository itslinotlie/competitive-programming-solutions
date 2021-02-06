// 02/05/2021
// https://codeforces.com/contest/1475/problem/C
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
const int mxn = 2e5+5;

int t(1), A, B, k, a[mxn], b[mxn]; vector<pii> edge; ll ans;
void solve() {
    cin >> A >> B >> k; ans = 0;
    edge.resize(k); CLR(a); CLR(b);
    for(auto &x:edge) cin >> x.F;
    for(auto &x:edge) cin >> x.S;
    for(auto &x:edge) {
        x.F--; x.S--;
        a[x.F]++; b[x.S]++; 
    }
    for(auto x:edge) {
        ans+=k-a[x.F]-b[x.S]+1;
    }
    cout << ans/2 << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}