// 03/20/2021
// https://codeforces.com/contest/1497/problem/B
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

int t(1), n, m, x, ans; map<int, int> frq;
void solve() {
    cin >> n >> m; ans = 0; frq.clear();
    FOR(i, n) {cin >> x; frq[x%m]++;}
    for(auto x:frq) {
        int op = m-x.F;
        if(x.F==0 || 2*x.F==m) ans++;
        else if(2*x.F<m || frq.find(op)==frq.end()) ans+=1+max(0, abs(x.S-frq[op])-1);
    } 
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}