// 04/08/2021
// https://cses.fi/problemset/task/1646
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

int n, q, l, r; ll a[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> q;
    FOR(i, n) {cin >> a[i]; a[i]+=a[i-1];}
    FOR(i, q) {
        cin >> l >> r;
        cout << a[r]-a[l-1] << endl;
    }
}