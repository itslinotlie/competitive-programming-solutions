// 03/10/2021
// https://cses.fi/problemset/task/1090
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

int n, x, a[mxn], ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    int l = 0, r = n-1;
    for(;l<=r;r--) {
        if(a[l]+a[r]<=x) l++;
        ans++;
    }
    cout << ans << "\n";
}