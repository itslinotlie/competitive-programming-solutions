// 04/08/2021
// https://cses.fi/problemset/task/1620
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const ll mxn = 2e5+5, MM = 1e18;

int n, x; ll a[mxn];
bool fun(ll k) {
    ll sum = 0;
    FOR(i, n) sum+=k/a[i];
    return sum>=x;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    FOR(i, n) cin >> a[i];
    ll lo = 1, hi = MM;
    while(hi-lo>1) {
        ll md = hi-(hi-lo)/2;
        if(fun(md)) hi = md;
        else lo = md;
    }
    cout << hi << endl;
}