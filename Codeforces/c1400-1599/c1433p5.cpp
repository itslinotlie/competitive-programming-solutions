// 03/09/2021
// https://codeforces.com/contest/1433/problem/E
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


int n;
ll fact(int x) {
    ll ret = 1;
    FOR(i, x) ret*=i;
    return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; n/=2; n--;
    cout << fact(2*n+1) / (n+1) << "\n";
}