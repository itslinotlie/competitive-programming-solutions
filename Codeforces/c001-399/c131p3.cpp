// 03/06/2021
// https://codeforces.com/contest/131/problem/C
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

ll n, m, t, ans;
ll ncr(ll n, ll r) {
    ll ret = 1;
    for(ll i=0;i<r;i++) {
        ret*=(n-i);
        ret/=(i+1);
    } return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> t;
    for(ll i=4;i<=t-1;i++) {
        ans+=ncr(n, i)*ncr(m, t-i);
    } cout << ans << endl;
}