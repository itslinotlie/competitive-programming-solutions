// 02/16/2021
// https://codeforces.com/contest/1490/problem/F
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

int t(1), n, a[mxn], ans, tot;
void solve() {
    cin >> n; map<int, int> mp, frq; ans = 0x3f3f3f3f; tot = 0;
    FOR(i, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto x:mp) {
        frq[x.S]+=x.S;
        tot+=x.S;
    }
    for(auto x:frq) {
        int cnt = 0;
        for(auto y:frq) {
            if(y.F<x.F) cnt+=y.S;
            else if(y.F>x.F) cnt+=(y.F-x.F)*(y.S/y.F);
        }
        ans = min(ans, cnt);
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