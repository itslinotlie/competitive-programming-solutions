// 02/16/2021
// https://codeforces.com/contest/1490/problem/D
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
const int mxn = 105;

int t(1), n, a[mxn], b[mxn];
int max_idx(int l, int r) {
    int mx = a[l], idx = l;
    for(int i=l;i<r;i++) {
        if(a[i]>mx) {
            mx = a[i]; idx = i;
        }
    }
    return idx;
}
void fun(int l, int r, int dep) {
    int idx = max_idx(l, r);
    b[idx] = dep;
    if(l<idx) fun(l, idx, dep+1);
    if(idx+1<r) fun(idx+1, r, dep+1);
}
void solve() {
    cin >> n;
    REP(i, n) cin >> a[i];
    fun(0, n, 0);
    REP(i, n) cout << b[i] << " "; cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}