// 02/21/2021
// https://cses.fi/problemset/task/1633
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
const int mxn = 1e6+6, mod = 1e9+7;

int n, dp[mxn];
int fun(int x) {
    if(dp[x]!=0) return dp[x];
    int sum = 0;
    for(int i=1;i<=min(x, 6);i++) sum=(sum+fun(x-i))%mod;
    return dp[x] = sum;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; dp[0] = 1;
    cout << fun(n) << endl;
}