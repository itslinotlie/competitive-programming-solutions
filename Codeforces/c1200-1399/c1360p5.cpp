// 03/08/2021
// https://codeforces.com/contest/1360/problem/E
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
const int mxn = 55;

int t(1), n, a[mxn][mxn]; char c;
void solve() {
    cin >> n;
    REP(i, n) REP(j, n) {
        cin >> c; a[i][j] = c-'0';
    }
    bool ans = true;
    for(int i=n-2;i>=0;i--) {
        for(int j=n-2;j>=0;j--) {
            if(a[i][j] && !a[i+1][j] && !a[i][j+1]) ans = false;
        }
    }
    cout << (ans? "YES":"NO") << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}