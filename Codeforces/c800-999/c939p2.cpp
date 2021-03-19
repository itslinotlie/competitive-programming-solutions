// 03/08/2021
// https://codeforces.com/contest/939/problem/B
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

ll n, k, x, type(1), amt, box;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, k) {
        cin >> x;
        if(x*(n/x)>amt) {
            amt = x*(n/x); box = n/x; type = i;
        }
    }
    cout << type << " " << box << endl;
}