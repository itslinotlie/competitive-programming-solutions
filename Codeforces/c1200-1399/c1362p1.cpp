// 05/21/2021
// https://codeforces.com/contest/1362/problem/A
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

int t(1); ll a, b, x, y, ans;
ll fun(ll x) {
    while(x%2==0) x/=2;
    return x;
}
void solve() {
    cin >> a >> b;
    if(a>b) swap(a, b);
    x = fun(a); y = fun(b);
    if(x!=y) {cout << "-1\n"; return;}
    ans = 0;
    b/=a;
    while(b>=8) {b/=8; ans++;}
    if(b>1) ans++;
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}