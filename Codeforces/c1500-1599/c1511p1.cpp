// 04/12/2021
// https://codeforces.com/contest/1511/problem/A
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
const int mxn = 5e2+2;

int t(1), n, a[mxn];
void solve() {
    cin >> n; int x, y, z, ans; x = y = z = ans = 0;
    FOR(i, n) cin >> a[i];
    FOR(i, n) {
        if(a[i]==1) x++;
        else if(a[i]==2) y++;
        else x++;
    }
    cout << x << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}