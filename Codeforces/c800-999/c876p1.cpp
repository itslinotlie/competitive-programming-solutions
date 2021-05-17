// 05/16/2021
// https://codeforces.com/contest/876/problem/A
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

int n, a, b, c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> a >> b >> c;
    int x = min({a, b, c});
    if(x==a || x==b || n==1) cout << (n-1)*min(a, b) << "\n";
    else cout << min(a, b)+c*(n-2) << "\n";
}