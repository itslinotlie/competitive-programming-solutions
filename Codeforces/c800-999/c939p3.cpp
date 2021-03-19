// 03/08/2021
// https://codeforces.com/contest/939/problem/C
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

int n, s, f, a[2*mxn], mx, pos;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {cin >> a[i]; a[i+n] = a[i];}
    FOR(i, 2*n) a[i]+=a[i-1];
    cin >> s >> f; f--;
    s+=n; f+=n;
    FOR(i, n) {
        int sum = a[f]-a[s-1];
        if(sum>mx) {mx = sum; pos = i;}
        s--; f--;
    }
    cout << pos << endl;
}