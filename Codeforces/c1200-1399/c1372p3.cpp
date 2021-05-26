// 05/22/2021
// https://codeforces.com/contest/1372/problem/C
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

int t(1), n;
void solve() {
    cin >> n; vector<int> a(n), b(n);
    for(auto &x:a) cin >> x;
    b = a; sort(b.begin(), b.end());
    if(a==b) {cout << "0\n"; return;}
    int l = 0, r = n-1, cnt = 0;
    for(;l<n && l+1==a[l]; l++) {}
    for(;r>=0 && r+1==a[r]; r--) {}
    for(int i=l;i<r;i++) {
        if(i+1==a[i]) cnt++;
    }
    if(cnt && r-l+1==3) cout << "3\n";
    else if(cnt) cout << "2\n";
    else cout << "1\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}