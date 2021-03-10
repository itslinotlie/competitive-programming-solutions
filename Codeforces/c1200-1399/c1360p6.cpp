// 03/08/2021
// https://codeforces.com/contest/1360/problem/F
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

int t(1), n, m;
void solve() {
    cin >> n >> m; vector<string> vec(n);
    for(auto &x:vec) cin >> x;
    string frst = vec[0];
    REP(i, m) {
        char c = frst[i];
        for(char j='a';j<='z';j++) {
            frst[i] = j; bool flag = true;
            REP(k, n) {
                int cnt = 0;
                REP(l, m) {
                    if(vec[k][l]!=frst[l]) cnt++;
                }
                if(cnt>1) {flag = false; break;}
            }
            if(flag) {cout << frst << "\n"; return;}
        }
        frst[i] = c;
    } cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}