// 02/16/2021
// https://codeforces.com/contest/1490/problem/E
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
 
int t(1), n, a[mxn], mn, ans; vector<int> vec; ll b[mxn], psa[mxn];
void solve() {
    cin >> n; mn = 0x3f3f3f3f; ans = 0; vec.clear(); 
    FOR(i, n) {
        cin >> a[i];
        b[i] = a[i];
        mn = min(mn, a[i]);
    }
    sort(b+1, b+1+n);
    CLR(psa);
    FOR(i, n) psa[i] = psa[i-1] + b[i];
    int idx = 0, l = 1;
    for(int i=1;i<n;i++) {
        if(psa[i]<b[i+1]) idx = i;
    }
    if(idx==0) {
        cout << n << "\n";
        FOR(i, n) cout << i << " "; cout << "\n";
    } else {
        cout << n-idx << "\n";
        FOR(i, n) {
            if(a[i]>b[idx]) cout << i << " ";
        } cout << "\n";
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}