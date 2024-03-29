// 04/13/2021
// https://codeforces.com/contest/1398/problem/C
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

int t(1), n; string s; map<int, int> mp;
void solve() {
    cin >> n >> s; mp.clear(); mp[0] = 1;
    ll ans = 0, cur = 0;
    REP(i, n) {
        cur+=s[i]-'1';
        ans+=mp[cur];
        mp[cur]++;
    }
    cout << (ans) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}