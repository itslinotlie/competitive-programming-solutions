// 03/08/2021
// https://codeforces.com/contest/1494/problem/A
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
    cin >> s; n = s.size();
    REP(i, 8) {
        bool bully[3], flag = true; queue<char> qu;
        REP(j, 3) bully[j] = (i&(1<<j));
        REP(j, n) {
            REP(k, 3) {
                if(s[j]=='A'+k) {
                    if(bully[k]) qu.push('A'+k);
                    else if(qu.empty()) {flag = false; break;}
                    else qu.pop();
                }
            }
        }
        if(flag && qu.empty()) {cout << "YES\n"; return;}
    } cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}