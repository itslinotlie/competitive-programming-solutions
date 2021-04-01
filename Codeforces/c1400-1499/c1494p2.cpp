// 03/08/2021
// https://codeforces.com/contest/1494/problem/B
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

int t(1), n, u, r, d, l;
void solve() {
    cin >> n >> u >> r >> d >> l;
    for(int i=0;i<16;i++) {
        int U = u, R = r, D = d, L = l;
        if(i&1) {U--; L--;}
        if(i&2) {L--; D--;}
        if(i&4) {D--; R--;}
        if(i&8) {R--; U--;}
        if(min(min(U, R), min(D, L))>=0 && max(max(U, R), max(D, L))<=n-2) {cout << "YES\n"; return;}
    } cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}