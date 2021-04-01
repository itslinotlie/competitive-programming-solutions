// 02/10/2021
// https://codeforces.com/contest/1473/problem/A
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

int t(1), n, m, x; string a, b;
bool same(string x) {
    for(int i=1;i<x.size();i++) {
        if(x[0]!=x[i]) return false;
    } return true;
}
string mul(string x, int len) {
    string res = "";
    while(len--) res+=x;
    return res;
}
void solve() {
    cin >> a >> b;
    if(b.size()<a.size()) swap(a, b); //smaller is a
    n = a.size(); m = b.size(); x = lcm(n, m);
    if(same(a) && same(b) && a[0]==b[0]) {
        REP(i, x) cout << a[0]; cout << endl;
    } else {
        if(mul(a, x/n)==mul(b, x/m)) cout << mul(a, x/n) << endl;
        else cout << -1 << endl;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}