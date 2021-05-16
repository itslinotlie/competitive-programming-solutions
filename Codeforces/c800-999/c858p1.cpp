// 05/10/2021
// https://codeforces.com/contest/858/problem/A
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

ll n, k, two, five, ten, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    while(n%2==0) {n/=2; two++;}
    while(n%5==0) {n/=5; five++;}
    ten = min(two, five);
    two-=ten; five-=ten;
    ans = 1LL*n*pow(10, ten)*pow(2, two)*pow(5, five);
    while(ten<k) {
        if(two) {ans*=5; two--;}
        else if(five) {ans*=2; five--;}
        else ans*=10;
        ten++;
    }
    cout << ans << "\n";
}