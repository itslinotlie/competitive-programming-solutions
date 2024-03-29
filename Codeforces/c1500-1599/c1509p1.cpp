// 04/16/2021
// https://codeforces.com/contest/1509/problem/A
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
const int mxn = 2e5+5;

int t(1), n, a[mxn];
void solve() {
    cin >> n; vector<int> e, o;
    REP(i, n) {
        cin >> a[i];
        if(a[i]%2) o.push_back(a[i]);
        else e.push_back(a[i]);
    }
    for(auto x:e) cout << x <<" ";
    for(auto x:o) cout << x << " "; cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}