// 02/21/2021
// https://cses.fi/problemset/task/1068
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

ll n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while(n!=1) {
        cout << n << " ";
        n = (n%2? n*3+1:n/2);
    } cout << 1 << endl;
}