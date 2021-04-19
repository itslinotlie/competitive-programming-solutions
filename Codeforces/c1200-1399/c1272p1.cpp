// 04/10/2021
// https://codeforces.com/contest/1272/problem/A
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

int t(1), a[3], b[3] = {1, -2, 1}; ll ans;
void fun(int idx) { //so this is how you do backtracking...
    if(idx==3) {
        ans = min(ans, 1LL*abs(a[0]-a[1])+abs(a[0]-a[2])+abs(a[1]-a[2]));
        return;
    }
    REP(i, 3) {
        fun(idx+1);
        a[idx]+=b[i];
    }
}
void solve() { ans = 0x3f3f3f3f3f3f3f3f;
    REP(i, 3) cin >> a[i];
    fun(0);
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}