// 04/13/2021
// https://codeforces.com/contest/1513/problem/B
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
const int mxn = 2e5+5, mod = 1e9+7;

int t(1), n, a[mxn];
void solve() {
    cin >> n;
    REP(i, n) cin >> a[i];
    int mini = *min_element(a, a+n), cnt = 0;
    REP(i, n) {
        if(a[i]==mini) cnt++;
        if((a[i]&mini)!=mini) {cout << "0\n"; return;}
    }
    ll fact = 1;
    FOR(i, n-2) fact = (fact*i)%mod;
    int ans = 1LL*cnt*(cnt-1)%mod;
    ans = 1LL*ans*fact%mod;
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}