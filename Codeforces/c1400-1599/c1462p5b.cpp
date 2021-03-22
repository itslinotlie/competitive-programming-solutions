// 03/08/2021
// https://codeforces.com/contest/1462/problem/E2
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
const int mxn = 2e5+5, mod = 1e9+7;

int t(1), n, m, k; ll ans, fact[mxn], invFact[mxn];
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
void precompute() {
    fact[0] = invFact[0] = 1;
    for(int i=1;i<mxn;i++) {
        fact[i] = (fact[i-1]*i)%mod;
        invFact[i] = binpow(fact[i], mod-2);
    }
}
ll ncr(int n, int k) {
    if(k>n) return 0;
    return fact[n] * invFact[k]%mod * invFact[n-k]%mod;
}
void solve() {
    cin >> n >> m >> k; vector<ll> vec(n); ans = 0;
    for(auto &x:vec) cin >> x;
    sort(vec.begin(), vec.end());
    REP(i, n) {
        int l = i+1;
        int r = upper_bound(vec.begin(), vec.end(), vec[i]+k) - vec.begin();
        ans = (ans + ncr(r - l, m - 1)) % mod;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t; precompute();
    for (int i=1;i<=t;i++) {
        solve();
    }
}