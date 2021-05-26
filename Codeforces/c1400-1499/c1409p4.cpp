// 05/18/2021
// https://codeforces.com/contest/1409/problem/D
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

int t(1); ll n, s, ans;
ll sum(ll x) {
    int ret = 0;
    while(x>0) {
        ret+=x%10; x/=10;
    } return ret;
}
void solve() {
    cin >> n >> s; ans = 0;
    if(sum(n)<=s) {cout << "0\n"; return;}
    ll pw = 1;
    for(int i=0;i<18;i++) {
        ll digit = (n/pw)%10, add = pw*((10-digit)%10);
        n+=add; ans+=add;
        if(sum(n)<=s) break;
        pw*=10;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}