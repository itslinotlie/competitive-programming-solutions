// 02/11/2021
// https://codeforces.com/contest/1391/problem/B
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}


int t(1), n, m, ans; char x;
void solve() {
    cin >> n >> m; ans = 0;
    FOR(i, n) FOR(j, m) {
        cin >> x;
        if(x=='C') continue;
        if(i==n && x=='D') ans++;
        if(j==m && x=='R') ans++;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}