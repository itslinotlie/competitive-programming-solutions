// 02/16/2021
// https://codeforces.com/contest/1490/problem/C
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}

int t(1); ll x;
void solve() {
    cin >> x; bool flag = true;
    if(x==1) {cout << "NO\n"; return;}
    ll a = max(1LL, (ll)cbrt(x));
    ll b = 1;
    while(a>=b) {
        ll c = a*a*a + b*b*b;
        if(c==x) break;
        if(c<x) b++;
        else a--;
    }
    cout << (a*a*a+b*b*b==x? "YES":"NO") << endl;
    
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}