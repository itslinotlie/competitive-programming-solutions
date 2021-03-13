// 03/10/2021
// https://cses.fi/problemset/task/1640
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

int n, x; pii a[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    FOR(i, n) {cin >> a[i].F; a[i].S = i;}
    sort(a+1, a+n+1);
    int lo = 1, hi = n;
    for(;lo<hi;) {
        int sum = a[lo].F+a[hi].F;
        if(sum==x) {cout << a[lo].S << " " << a[hi].S << endl; return 0;}
        else if(sum>x) hi--;
        else lo++;
    }
    cout << "IMPOSSIBLE" << endl;
}