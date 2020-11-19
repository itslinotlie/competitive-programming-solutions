// 11/14/2020
// https://codeforces.com/contest/670/problem/D1
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
const int mxn = 1e5+5, MM = 2e9;

ll n, k, a[mxn], b[mxn];
bool fun(ll x) {
    ll cnt = 0, tmp = k;
    FOR(i, n) {
        if(b[i]>=a[i]*x) continue;
        else tmp-=abs(b[i]-a[i]*x);
        if(tmp<0) return false;
    } return true;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, n) cin >> a[i];
    FOR(i, n) cin >> b[i];
    ll lo = 0, hi = MM;
    while(lo<=hi) {
        ll md = (lo+hi)/2;
        if(fun(md)) lo = md + 1;
        else hi = md - 1;
    }
    cout << hi << "\n";
}