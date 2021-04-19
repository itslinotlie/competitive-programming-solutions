// 04/10/2021
// https://codeforces.com/contest/1272/problem/D
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

int n, a[mxn], l[mxn], r[mxn], ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    FOR(i, n) {
        if(a[i]>a[i-1]) l[i] = l[i-1] + 1;
        else l[i] = 1;
    }
    for(int i=n;i>=1;i--) {
        if(a[i]<a[i+1]) r[i] = r[i+1] + 1;
        else r[i] = 1;
    }
    FOR(i, n) {
        ans = max(ans, l[i]);
        if(a[i+1]>a[i-1]) ans = max(ans, l[i-1]+r[i+1]);
    }
    cout << ans << endl;
}