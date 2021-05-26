// 05/22/2021
// https://codeforces.com/contest/1425/problem/A
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

int t(1); ll x;
ll fun(ll x) {
    if(x<5) return max(1LL, x-1);
    if(x%2==1 || x%4==0) return x-fun(x-1);
    return x-fun(x/2);
}
void solve() {
    cin >> x;
    cout << fun(x) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}