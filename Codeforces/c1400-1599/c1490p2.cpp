// 02/16/2021
// https://codeforces.com/contest/1490/problem/B
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
const int mxn = 3e4+4;

int t(1), n, a[mxn], ans, b[3];
void solve() {
    cin >> n; ans = 0; CLR(b);
    FOR(i, n) cin >> a[i], b[a[i]%3]++;
    for(int t=0;t<3;t++)
    for(int i=0;i<3;i++) {
        if(b[i]>n/3) {
            ans+=b[i]-n/3;
            b[(i+1)%3]+=b[i]-n/3;
            b[i] = n/3;
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}