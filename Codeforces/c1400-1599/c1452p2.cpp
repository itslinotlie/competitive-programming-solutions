// 03/09/2021
// https://codeforces.com/contest/1452/problem/B
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

int t(1); ll n, k, sum;
void solve() {
    cin >> n; vector<ll> vec(n);
    for(auto &x:vec) cin >> x;
    sum = accumulate(vec.begin(), vec.end(), 0LL);
    k = max(*max_element(vec.begin(), vec.end()), (sum+n-2)/(n-1));
    cout << k*(n-1) - sum << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}