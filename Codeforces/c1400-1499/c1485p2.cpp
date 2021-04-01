// 02/17/2021
// https://codeforces.com/contest/1485/problem/B
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
const int mxn = 1e5+5;

int n, q, k, a[mxn], l, r;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> q >> k;
    FOR(i, n) cin >> a[i];
    FOR(i, q) {
        cin >> l >> r;
        cout << k + (a[r]-a[l]+1) - 2*(r-l+1) << "\n";
    }
}