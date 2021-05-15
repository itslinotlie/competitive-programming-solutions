// 05/10/2021
// https://codeforces.com/contest/1385/problem/D
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
int fun(const string &s, char c) {
    if(s.size()==1) return s[0]!=c;
    int md = s.size()/2;
    int suml = fun(string(s.begin(), s.begin()+md), c+1);
    suml+=s.size()/2 - count(s.begin()+md, s.end(), c);
    int sumr = fun(string(s.begin()+md, s.end()), c+1);
    sumr+=s.size()/2 - count(s.begin(), s.begin()+md, c);
    return min(suml, sumr);
}
void solve() {
    cin >> n >> s;
    cout << fun(s, 'a') <<" \n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}