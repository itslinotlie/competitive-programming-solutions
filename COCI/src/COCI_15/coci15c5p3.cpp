// 02/13/2021
// https://dmoj.ca/problem/coci15c5p3
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
const int mxn = 1e5+5, mod = 1e9+7;

int n, k, a[mxn]; ll f[mxn], inv[mxn], ans;
ll binpow(ll x, int exp) {
    ll ans = 1;
    for(;exp;exp>>=1) {
        if(exp&1) ans = (ans*x)%mod;
        x = (x*x)%mod;
    }
    return ans;
}
void init() {
    f[0] = inv[0] = 1;
    for(int i=1;i<=n;i++) f[i] = f[i-1] * i % mod;
    for(int i=1;i<=n;i++) inv[i] = binpow(f[i], mod-2);
}
ll c(int n, int k) {
    return f[n]*inv[k]%mod * inv[n-k] %mod;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; init();
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    for(int i=k-1;i<n;i++) {
        ans+=a[i]*c(i, k-1) % mod;
        ans%=mod;
    }
    cout << ans << endl;
}