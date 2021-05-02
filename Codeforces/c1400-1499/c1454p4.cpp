// 04/30/2021
// https://codeforces.com/contest/1454/problem/D
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

int t(1); ll x, k; 
ll fun(int base, int pow) {
    ll ret = 1;
    FOR(i, pow) ret = ret * base;
    return ret;
}
void solve() {
    cin >> x; map<int, int> mp; k = x;
    for(int i=2;i<=sqrt(x);i++) {
        while(x%i==0) {
            mp[i]++;
            x/=i;
        }
    }
    int maxi = 0, val;
    for(auto x:mp) {
        if(x.S>maxi) val = x.F;
        maxi = max(maxi, x.S);
    }
    if(maxi==0) {
        cout << 1 << "\n" << x << "\n";
        return;
    }
    cout << maxi << "\n";
    FOR(i, maxi-1) cout << val <<" ";
    cout << k/fun(val, maxi-1) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}