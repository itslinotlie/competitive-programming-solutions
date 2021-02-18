// 02/06/2021
// https://codeforces.com/contest/1475/problem/D
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
const int mxn = 1e3+3, mod = 1e9+7;

int t(1), n, k, x, cnt[mxn];
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res=res*1ll*a%mod;
        a=a*1ll*a%mod;
        b/=2;
    }
    return res;
}
int fact(int x) {
    int ret = 1;
    FOR(i, x) ret=ret*1ll*i%mod;
    return ret;
}
int math(int n, int k) { //inverse element modulo orz (inverse of a number % mod is pow(number, mod-2) if mod is prime)
    return 1ll * fact(n) * binpow(fact(k), mod-2) % mod * binpow(fact(n-k), mod-2) % mod;
}
void solve() {
    cin >> n >> k; CLR(cnt);
    FOR(i, n) {
        cin >> x;
        cnt[x]++;
    }
    for(int i=n;i>=1;i--) {
        if(cnt[i]>=k) {
            cout << math(cnt[i], k) << endl;
            return;
        } else k-=cnt[i];
    }
    cout << 1 << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}