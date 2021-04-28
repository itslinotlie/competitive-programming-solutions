// 04/16/2021
// https://codeforces.com/contest/1509/problem/B
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

int t(1), n; string s;
void solve() {
    cin >> n >> s;
    int idx = 0, cnt = 0;
    REP(i, n) {
        if(s[i]=='M') idx = i;
        if(s[i]=='M') cnt++;
    }
    int x = 0, flag = 0;
    for(int i=0;i<=idx;i++) {
        if(s[i]=='T') x++;
        else x--;
        if(x<0 || x>cnt) flag = 1;
    }
    if(flag) {cout << "NO\n"; return;}
    int hi = n-idx-1, lo = n-cnt-hi;
    if(cnt==x+hi) cout << "YES\n";
    else cout <<"NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}