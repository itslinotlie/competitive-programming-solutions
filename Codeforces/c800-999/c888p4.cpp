// 03/19/2021
// https://codeforces.com/contest/888/problem/D
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

ll n, k, ans(1), d[5] = {0,0,1,2,9};
ll ncr(ll n, ll k) {
    ll top = 1, bot = 1;
    for(ll i=n;i>n-k;i--) top*=i;
    for(ll i=1;i<=k;i++) bot*=i;
    return top/bot;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, k) ans+=ncr(n, i)*d[i];
    cout << ans << endl;
}