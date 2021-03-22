// 02/10/2021
// https://codeforces.com/contest/1481/problem/A
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


int t(1), n, r, c, x, y; string s;
void solve() {
    cin >> r >> c >> s; 
    n = s.size(); x = y = 0;
    REP(i, n) {
        if(s[i]=='R' && r>0) x++;
        if(s[i]=='L' && r<0) x--;
        if(s[i]=='U' && c>0) y++;
        if(s[i]=='D' && c<0) y--;
    }
    if(((r>0 && x>=r) || (r<=0 && x<=r)) && ((c>0 && y>=c) || (c<=0 && y<=c))) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}