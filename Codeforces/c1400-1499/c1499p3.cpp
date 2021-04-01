// 03/18/2021
// https://codeforces.com/contest/1499/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
#define int long long
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 2e5+5;

int t(1); ll n, x, mini[2], a[2][mxn], r, c, ans;
void solve() {
    cin >> n;
    REP(i, n) {cin >> x; a[i%2][i] = x;}
    mini[0] = a[0][0]; mini[1] = a[1][1]; ans = n*mini[0] + n*mini[1];
    r=a[0][0]; c=a[1][1];
    int sum[2] = {1, 1};
    for(int i=2;i<n;i++) {
        mini[i%2] = min(mini[i%2], a[i%2][i]); sum[i%2]++;
        r+=a[0][i]; c+=a[1][i];
        ans = min(ans, r+(n-sum[0])*mini[0] + c+(n-sum[1])*mini[1]);
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}