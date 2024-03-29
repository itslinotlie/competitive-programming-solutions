// 02/17/2021
// https://codeforces.com/contest/1485/problem/A
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

int t(1), a, b;
int fun(int a, int b, int x) {
    if(a==0) return 0;
    int res = 0x3f3f3f3f;
    if(b!=1) res = min(res, fun(a/b, b, x));
    if(x<=10) res = min(res, fun(a, b+1, x+1));
    return 1 + res;
}
void solve() {
    cin >> a >> b;
    cout << 1 + min(fun(a/b, b, 0), fun(a, b+1, 1)) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}