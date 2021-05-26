// 05/16/2021
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
const int mxn = 1e2+2;

ll b, k, ans, power(1); vector<ll> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> b >> k; vec.resize(k);
    for(auto &x:vec) cin >> x;
    reverse(vec.begin(), vec.end());
    REP(i, k) {
        ans = (ans+vec[i]*power)%2;
        power = (power*b)%2;
    }
    cout << (ans%2? "odd":"even") << "\n";
}