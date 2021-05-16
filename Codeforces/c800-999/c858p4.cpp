// 05/10/2021
// https://codeforces.com/contest/858/problem/D
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
const int mxn = 7e4+4;

int n; string s[mxn]; map<string, int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> s[i];
        for(int len=1;len<=9;len++) {
            for(int j=0;j+len<=9;j++) {
                int &x = mp[s[i].substr(j, len)];
                x = (x==0 || x==i)? i:-1;
            }
        }
    }
    for(auto &x:mp) {
        if(x.S>0 && s[x.S].size()>x.F.size()) s[x.S] = x.F;
    }
    FOR(i, n) cout << s[i] << "\n";
}