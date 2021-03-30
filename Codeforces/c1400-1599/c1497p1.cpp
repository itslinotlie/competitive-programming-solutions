// 03/20/2021
// https://codeforces.com/contest/1497/problem/A
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
const int mxn = 1e2+2;

int t(1), n, a[mxn], b[mxn], idx;
void solve() {
    cin >> n; idx = 1;
    FOR(i, n) cin >> a[i];
    sort(a+1, a+1+n);
    FOR(i, n) {
        if(i==1 || a[i]!=a[i-1]) b[idx++] = a[i];
    }
    FOR(i, n) {
        if(i>1 && a[i]==a[i-1]) b[idx++] = a[i];
    }
    FOR(i, n) cout << b[i] << " "; cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}