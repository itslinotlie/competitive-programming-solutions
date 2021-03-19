// 03/19/2021
// https://codeforces.com/contest/888/problem/B
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

int n, a[4]; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    REP(i, n) {
        if(s[i]=='U') a[0]++;
        if(s[i]=='R') a[1]++;
        if(s[i]=='D') a[2]++;
        if(s[i]=='L') a[3]++;
    }
    cout << 2*(min(a[0], a[2])+min(a[1], a[3])) << endl;
}