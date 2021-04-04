// 03/12/2021
// https://codeforces.com/contest/1327/problem/B
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
const int mxn = 1e5+5;

int t, n, k, ans, x; bool vis[mxn], flag;
void solve() {
    cin >> n; memset(vis, false, sizeof(vis)); ans = -1;
    FOR(i, n) {
        cin >> k; flag = true;
        FOR(j, k) {
            cin >> x;
            if(flag && !vis[x]) {vis[x] = true; flag = false;}
        }
        if(flag) ans = i;
    }
    if(ans==-1) cout << "OPTIMAL\n";
    else {
        FOR(i, n) if(!vis[i]) {x = i; break;}
        cout << "IMPROVE\n" << ans << " " << x << "\n";
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}