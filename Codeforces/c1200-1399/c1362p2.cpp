// 05/21/2021
// https://codeforces.com/contest/1362/problem/B
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
const int mxn = 1025;

int t(1), n, a[mxn]; bool vis[mxn];
bool fun(int x) {
    FOR(i, n) {
        if(!vis[a[i]^x]) return false;
    } return true;
}
void solve() {
    cin >> n;
    memset(vis, false, sizeof(vis));
    FOR(i, n) {
        cin >> a[i];
        vis[a[i]] = true;
    }
    for(int i=1;i<1024;i++) {
        if(fun(i)) {cout << i << "\n"; return;}
    } cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}