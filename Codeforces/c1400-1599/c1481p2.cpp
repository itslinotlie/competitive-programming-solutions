// 02/10/2021
// https://codeforces.com/contest/1481/problem/B
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
const int mxn = 1e2+2;

int t(1), n, k, x, a[mxn];
void solve() {
    cin >> n >> k; x = -1;
    FOR(i, n) cin >> a[i];
    while(true) {
        if(k<=0) break;
        bool flag = true;
        for(int i=1;i<n;i++) {
            if(a[i]<a[i+1]) {
                a[i]++; x = i; k--; flag = false; break;
            } else x = i+1;
        }
        if(flag) {
            x = -1; break;
        }
    }
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}