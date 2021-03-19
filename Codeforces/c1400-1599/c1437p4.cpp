// 02/25/2021
// https://codeforces.com/contest/1437/problem/D
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
const int mxn = 2e5+5;

int t(1), n, a[mxn], h[mxn], idx;
void solve() {
    cin >> n; CLR(h); idx = 0;
    REP(i, n) cin >> a[i];
    FOR(i, n) {
        if(i!=1 && a[i-1]>a[i]) idx++;
        h[i] = h[idx] + 1;
    }
    cout << h[n-1] << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}