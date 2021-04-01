// 03/19/2021
// https://codeforces.com/contest/1499/problem/D
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
const int mxn = 2e7+7;

int t(1), c, d, x, ans, k1, k2, prime[mxn], val[mxn];
void precompute() {
    fill(prime, prime+mxn, -1); prime[1] = 1;
    for(int i=2;i<mxn;i++) {
        if(prime[i]==-1) {
            for(int j=i;j<mxn;j+=i) {
                if(prime[j]==-1) prime[j] = i;
            }
        }
    }
    for(int i=2;i<mxn;i++) {
        int x = i/prime[i];
        val[i] = val[x] + (prime[i]!=prime[x]);
    }
}
void solve() {
    cin >> c >> d >> x; ans = 0;
    FOR(i, sqrt(x)) {
        if(x%i) continue;
        k1 = x/i + d;
        if(k1%c==0) ans+=1<<val[k1/c];
        if(i*i==x) continue;
        k2 = i+d;
        if(k2%c==0) ans+=1<<val[k2/c];
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t; precompute();
    for (int i=1;i<=t;i++) {
        solve();
    }
}