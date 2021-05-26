// 05/20/2021
// https://codeforces.com/contest/1133/problem/D
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

int n, zero, ans; map<pii, int> mp;
void fun(pii &p) {
    if(p.F<0) {p.F*=-1; p.S*=-1;}
    else if(p.F==0 && p.S<0) p.S*=-1;
    int g = gcd(abs(p.F), abs(p.S));
    p.F/=g; p.S/=g;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; vector<double> a(n), b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    REP(i, n) {
        if(a[i]==0) {
            if(b[i]==0) zero++;
        } else {
            pii p = pii{-b[i], a[i]};
            fun(p); mp[p]++;
            ans = max(ans, mp[p]);
        }
    }
    cout << ans+zero << "\n";
}