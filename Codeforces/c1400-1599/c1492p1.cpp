// 03/09/2021
// https://codeforces.com/contest/1492/problem/A
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

int t(1); ll p, a, b, c;
void solve() {
    cin >> p >> a >> b >> c;
    cout << min({max(0LL, a-(p%a==0?a:p%a)), max(0LL, b-(p%b==0?b:p%b)), max(0LL, c-(p%c==0?c:p%c))}) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}