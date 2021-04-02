// 03/13/2021
// https://codeforces.com/contest/991/problem/A
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

int a, b, c, n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> c >> n;
    if(c>a || c>b) cout << "-1\n";
    else if(a+b-c>=n) cout << "-1\n";
    else cout << n-a-b+c << "\n";
}