// 05/04/2021
// https://codeforces.com/contest/1422/problem/B
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

int t(1), n, m; ll ans;
ll fun(vector<ll> x) {
    sort(x.begin(), x.end());
    ll ret = 0, sz = x.size();
    REP(i, sz) ret+=abs(x[i]-x[sz/2]);
    return ret;
}
void solve() { ans = 0;
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m; vector<vector<ll>> g(n);
    REP(i, n) {
        g[i].resize(m);
        REP(j, m) cin >> g[i][j];
    }
    int l_row = 0, r_row = n-1;
    while(l_row<=r_row) {
        int l_col = 0, r_col = m-1;
        while(l_col<=r_col) {
            vector<ll> num = {g[l_row][l_col]};
            if(l_row!=r_row) num.push_back(g[r_row][l_col]);
            if(r_col!=l_col) num.push_back(g[l_row][r_col]);
            if(l_col!=r_col && l_row!=r_row) num.push_back(g[r_row][r_col]);
            ans+=fun(num);
            l_col++; r_col--;
        } l_row++; r_row--;
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