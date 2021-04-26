// 04/25/2021
// https://codeforces.com/contest/991/problem/D
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

int ans, n, x; string s[2];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    REP(i, 2) cin >> s[i]; n = s[0].size();
    REP(i, n) {
        int col = (s[0][i]=='0') + (s[1][i]=='0');
        x+=col;
        if(x>=3) {x-=3; ans++;}
        else x = col;
    }
    cout << ans << "\n";
}