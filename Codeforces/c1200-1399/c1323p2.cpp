// 04/16/2021
// https://codeforces.com/contest/1323/problem/B
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
const int mxn = 4e4+4;

ll n, m, k, ans; vector<ll> a, b;
vector<ll> fun(vector<ll> x) {
    int n = x.size(), i = 0;
    vector<ll> ret(n+1);
    while(i<n) {
        if(x[i]==0) {i++; continue;}
        int j=i;
        while(j<n && x[j]==1) j++;
        for(int len=1;len<=j-i;len++) {
            ret[len]+=j-i-len+1;
        }
        i = j;
    }
    return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    a.resize(n); b.resize(m);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    auto x = fun(a);
    auto y = fun(b);
    for(int i=1;i<x.size();i++) {
        if(k%i==0 && k/i<=m) {
            ans+=x[i]*y[k/i];
        }
    }
    cout << ans << "\n";
} 