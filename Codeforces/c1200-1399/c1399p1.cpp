// 05/19/2021
// https://codeforces.com/contest/1399/problem/A
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

int t(1), n;
void solve() {
    cin >> n; vector<int> vec(n);
    for(auto &x:vec) cin >> x;
    sort(vec.begin(), vec.end());
    for(int i=1;i<n;i++) {
        if(abs(vec[i]-vec[i-1])>1) {cout << "NO\n"; return;}
    } cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}