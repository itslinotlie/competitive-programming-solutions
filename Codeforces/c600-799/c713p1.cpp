// 03/12/2021
// https://codeforces.com/contest/713/problem/A
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

int n, len = 18; char c; string s; map<string, int> mp;
string fun(string s) {
    string ret = "";
    while(s.length()<len) s = to_string(0)+s;
    REP(i, len) ret+=((s[i]-'0')%2? "1":"0");
    return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> c >> s;
        if(c=='+') mp[fun(s)]++;
        else if(c=='-') mp[fun(s)]--;
        else cout << mp[fun(s)] << "\n";
    }    
}