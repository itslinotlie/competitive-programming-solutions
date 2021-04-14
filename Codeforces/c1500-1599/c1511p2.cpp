// 04/12/2021
// https://codeforces.com/contest/1511/problem/B
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

ll t(1), a, b, c, prime[10] = {3, 11, 101, 1009, 10111, 100019, };
void solve() {
    cin >> a >> b >> c;
    ll x = pow(10, a-1);
    ll y = pow(10, c-1);
    while(ceil(log10(y+1))<b) y*=11;
    cout << x << " " << y << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}