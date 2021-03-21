// 03/09/2021
// https://codeforces.com/contest/1452/problem/D
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
const int mxn = 2e5+5, mod = 998244353;

int n; ll fib[mxn], fact[mxn], invFact[mxn];
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
    fib[0] = 0; fib[1] = 1;
    for(int i=2;i<mxn;i++) fib[i] = (fib[i-2]+fib[i-1])%mod;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; precompute();
    ll num = fib[n], dem = binpow(2, n);
    cout << (num * binpow(dem, mod-2))%mod << "\n";
}