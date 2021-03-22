// 03/18/2021
// https://codeforces.com/contest/1499/problem/B
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

int t(1), n; string s; bool flag;
bool sort() {
    bool one = false;
    REP(i, n) {
        if(s[i]=='0' && one) return false;
        if(s[i]=='1') one = true;
    } return true;
}
void solve() {
    cin >> s; n = s.size();
    if(sort()) {cout << "YES\n"; return;} //this should be good
    bool zero = false; bool one = false;
    for(int i=1;i<n;i++) {
        if(s[i-1]==s[i] && s[i]=='0' && one) zero = true;
        if(s[i-1]==s[i] && s[i]=='1') one = true;
    }
    if(zero) cout << "NO\n";
    else cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}