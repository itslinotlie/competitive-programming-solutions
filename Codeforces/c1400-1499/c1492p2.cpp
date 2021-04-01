// 03/09/2021
// https://codeforces.com/contest/1492/problem/B
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
const int mxn = 1e5+5;

int t(1), n, x, a[mxn], pos[mxn];
void solve() {
    cin >> n;
    FOR(i, n) {
        cin >> a[i];
        pos[a[i]] = i;
    } x = n+1;
    for(int i=n;i>=1;i--) {
        if(pos[i]<x) {
            for(int j=pos[i];j<x;j++) cout << a[j] << " ";
            x = pos[i];
        }
    }
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}