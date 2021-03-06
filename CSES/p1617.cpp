// 02/22/2021
// https://cses.fi/problemset/task/1617
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mod = 1e9+7;
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res=res*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return res;
}

ll n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    cout << binpow(2, n) << endl;
}