// 04/11/2021
// https://codeforces.com/contest/1513/problem/A
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
const int mxn = 1e2+2;

int t(1), n, k, a[mxn];
void solve() {
    cin >> n >> k;
    FOR(i, n) a[i] = i;
    if(k*2>=n) {cout << "-1\n"; return;}
    int idx = 2;
    while(k--) {
        swap(a[idx], a[idx+1]); idx+=2;
    }
    FOR(i, n) cout << a[i] << " "; cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}