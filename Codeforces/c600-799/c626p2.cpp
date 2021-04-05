// 03/12/2021
// https://codeforces.com/contest/626/problem/B
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

int n, sum; string s, ans; map<char, int> mp; bool vis[3]; char c[3] = {'R', 'G', 'B'};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s; sort(s.begin(), s.end());
    REP(i, n) mp[s[i]]++;
    if(s[0]==s[n-1]) cout << s[0] << "\n";
    else if(mp['R'] && mp['G'] && mp['B']) cout << "BGR\n";
    else {
        for(auto x:mp) {
            if(x.S!=n-1) cout << x.F;
        } cout << "\n";
    }
}