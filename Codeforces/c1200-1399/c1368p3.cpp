// 03/25/2021
// https://codeforces.com/contest/1368/problem/C
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
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    cout << 3*(n+1)+1 << "\n";
    cout << 0 << " " << 0 << "\n";
    FOR(i, n+1) {
        cout << i-1 << " " << i   << "\n";
        cout << i   << " " << i   << "\n";
        cout << i   << " " << i-1 << "\n";
    }
}