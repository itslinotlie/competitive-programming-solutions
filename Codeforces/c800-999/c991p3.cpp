// 03/13/2021
// https://codeforces.com/contest/991/problem/C
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

ll n, ans;
bool fun(ll x) {
    ll amt = 0, N = n;
    while(N>0) {
        amt+=min(N, x); N-=min(N, x); 
        if(N>=10) N-=N/10;
    }
    return 2*amt>=n;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    ll lo = 1, hi = n;
    while(lo<=hi) {
        ll mid = (lo+hi)/2;
        if(fun(mid)) {hi = mid-1; ans = mid;}
        else lo = mid+1;
    }
    cout << ans << endl;
}