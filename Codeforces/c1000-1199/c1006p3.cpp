// 05/01/2021
// https://codeforces.com/contest/1006/problem/C
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

ll n, a[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i]; 
    int l = 1, r = n;
    ll maxi = 0, lsum = a[1], rsum = a[n];
    for(;l<r;) {
        if(lsum==rsum) maxi = lsum;
        if(lsum<rsum) lsum+=a[++l];
        else rsum+=a[--r];
    }
    cout << maxi << "\n";
}