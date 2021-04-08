// 03/14/2021
// https://codeforces.com/contest/1155/problem/C
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
const int mxn = 3e5+5;

int n, m; ll a[mxn], b[mxn], diff;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, n) cin >> a[i];
    FOR(i, m) cin >> b[i];
    diff = a[2]-a[1];
    for(int i=3;i<=n;i++) diff = gcd(diff, a[i]-a[i-1]);
    FOR(i, m) {
        if(diff%b[i]==0) {cout << "YES" << endl << a[1] << " " << i << endl; return 0;}
    } cout << "NO" << endl;
}