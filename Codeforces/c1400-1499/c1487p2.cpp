// 02/15/2021
// https://codeforces.com/contest/1487/problem/B
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

int t(1), n, k;
void solve() {
    cin >> n >> k;
    if(n%2==0) {
        cout << (k%n==0? n:k%n) << endl;
    } else {
        int x = ceil((k-1)/(n/2));
        cout << ((k%n+x)%n==0? n:(k%n+x)%n) << endl;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}