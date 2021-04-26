// 03/14/2021
// https://codeforces.com/contest/260/problem/A
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

int a, b, n, x;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> n;
    REP(i, 10) {
        x = 10*a+i;
        if(x%b==0) {
            cout << x; REP(j, n-1) cout << 0; cout << endl;
            return 0;
        } 
    } cout << "-1" << endl;
}