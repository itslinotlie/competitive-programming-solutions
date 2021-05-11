// 05/09/2021
// https://codeforces.com/contest/1520/problem/D
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

int t(1), n, a[mxn]; ll ans;
void solve() { ans = 0;
    cin >> n; map<int, int> mp;
    FOR(i, n) {cin >> a[i]; a[i]-=i; mp[a[i]]++;}
    for(auto x:mp) {
        ans+=1LL*(x.S)*(x.S-1)/2;
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