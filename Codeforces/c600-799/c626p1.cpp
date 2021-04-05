// 03/12/2021
// https://codeforces.com/contest/626/problem/A
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
const int mxn = 2e2+2;

int n, x, y, ans; pii a[mxn]; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    REP(i, n) {
        if(s[i]=='U') a[i] = {1, 0};
        if(s[i]=='D') a[i] = {-1, 0};
        if(s[i]=='R') a[i] = {0, 1};
        if(s[i]=='L') a[i] = {0, -1};
    }
    for(int len=1;len<=n;len++) {
        x = y = 0;
        for(int i=0;i<n;i++) {
            x+=a[i].S; y+=a[i].F;
            if(i>=len) {
                if(!x && !y) ans++;
                x-=a[i-len].S; y-=a[i-len].F;
            }
        }
    }
    cout << ans << endl;
}