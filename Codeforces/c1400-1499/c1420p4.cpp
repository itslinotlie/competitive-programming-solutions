// 03/09/2021
// https://codeforces.com/contest/1420/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 3e5+5, mod = 998244353;

int n, k, x, y; ll fact[mxn], invFact[mxn], a[2*mxn]; vector<pii> vec;
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
ll ncr(ll n, ll r) {
    if(r>n) return 0;
    return fact[n]*invFact[r]%mod*invFact[n-r]%mod;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    fact[0] = invFact[0] = 1;
    for(int i=1;i<mxn;i++) {
        fact[i] = (fact[i-1]*i)%mod;
        invFact[i] = binpow(fact[i], mod-2);
    }
    cin >> n >> k;
    REP(i, n) {
        cin >> x >> y;
        vec.push_back({x, 0});
        vec.push_back({y, 1});
    } sort(vec.begin(), vec.end());
    ll ans = 0, cnt = 0;
    REP(i, 2*n) {
        if(vec[i].S==0) cnt++;
        else ans = (ans+ncr(--cnt, k-1))%mod;
    }
    cout << ans << "\n";
}