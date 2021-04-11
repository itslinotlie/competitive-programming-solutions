// 02/16/2021
// https://codeforces.com/contest/1490/problem/A
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
const int mxn = 55;

int t(1), n, a[mxn], ans;
double fun(int x, int y) {
    return 1.0 * max(x, y) / min(x, y);
}
void solve() {
    cin >> n; ans = 0;
    FOR(i, n) cin >> a[i];
    for(int i=1;i<n;i++) {
        int b = a[i], c = a[i+1];
        int x = min(b, c), y = max(b, c);
        while(fun(x, y)>2) {
            x*=2; ans++;
        }
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