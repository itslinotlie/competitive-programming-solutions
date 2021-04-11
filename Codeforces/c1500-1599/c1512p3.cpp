// 04/10/2021
// https://codeforces.com/contest/1512/problem/C
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


int t(1), a, b, n, x, y; string s;
void solve() {
    cin >> a >> b >> s; n = s.size(); x = a; y = b;
    REP(i, n) {
        if(s[i]!='?') {
            if(s[n-i-1]!='?' && s[i]!=s[n-i-1]) {cout << "-1\n"; return;}
            s[n-i-1] = s[i];
        }
    }
    REP(i, n) {
        if(s[i]=='0') a--;
        else if(s[i]=='1') b--;
    }
    REP(i, n) {
        if(s[i]=='?') {
            if(i!=n-i-1) {
                if(a>=2) {s[i]='0'; s[n-i-1]='0'; a-=2;}
                else if(b>=2) {s[i]='1'; s[n-i-1]='1'; b-=2;}  
            } else {
                if(a%2) {s[i] = '0'; a--;}
                else if(b%2) {s[i] = '1'; b--;}
            }
        }
    }
    REP(i, n) {
        if(s[i]=='?') {cout << "-1\n"; return;}
    }
    REP(i, n) {
        if(s[i]=='0') x--;
        if(s[i]=='1') y--;
    }
    if(x!=0 || y!=0) {cout << "-1\n"; return;}
    cout << s << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}