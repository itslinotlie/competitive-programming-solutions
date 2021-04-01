// 03/30/2021
// https://codeforces.com/contest/1506/problem/D
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

int t(1), n, k, x; map<int, int> mp; 
void solve() {
    cin >> n; mp.clear(); x = n;
    priority_queue<pii> pq;
    FOR(i, n) {cin >> k; mp[k]++;}
    for(auto x:mp) pq.push({x.S, x.F});
    while(pq.size()>=2) {
        pii u = pq.top(); pq.pop();
        pii v = pq.top(); pq.pop();
        u.F--; v.F--;
        x-=2;
        if(u.F) pq.push({u.F, u.S});
        if(v.F) pq.push({v.F, v.S});
    }
    cout << x << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}