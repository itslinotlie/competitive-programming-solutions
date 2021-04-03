// 03/18/2021
// https://codeforces.com/contest/1118/problem/C
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
const int mxn = 21*21;

int n, m, x, a[mxn][mxn]; priority_queue<pii> pq; map<int, int> frq;
int flip(int i) {
    return n-i-1;
}
void put(vector<pii> pos) {
    auto u = pq.top(); pq.pop();
    if(u.F<pos.size()) {cout << "NO\n"; exit(0);}
    for(auto x:pos) a[x.F][x.S] = u.S;
    u.F-=pos.size();
    pq.push(u);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; m = n/2;
    REP(i, n*n) {cin >> x; frq[x]++;}
    for(auto val:frq) pq.push({val.S, val.F});
    REP(i, m) REP(j, m) put({{i,j}, {i,flip(j)}, {flip(i),j}, {flip(i),flip(j)}});
    if(n%2) {
        REP(i, m) {
            put({{i, m}, {flip(i), m}});
            put({{m, i}, {m, flip(i)}});
        } put({{m, m}});
    } cout << "YES\n";
    REP(i, n) {REP(j, n) cout << a[i][j] << " "; cout << "\n";}
}