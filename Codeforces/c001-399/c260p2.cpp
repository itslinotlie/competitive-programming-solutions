// 03/14/2021
// https://codeforces.com/contest/260/problem/B
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

string s, tmp; int n, x, digit[8] = {0, 1, 3, 4, 6, 7, 8, 9}, months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; map<string, int> mp;
bool fun(string s) {
    for(int i=0;i<8;i++) if(s[digit[i]]=='-') return false;
    int year = 1000*(s[6]-'0') + 100*(s[7]-'0') + 10*(s[8]-'0') + (s[9]-'0');
    if(year<2013 || year>2015) return false;
    int month = 10*(s[3]-'0') + (s[4]-'0');
    if(month<1 || month>12) return false;
    int day = 10*(s[0]-'0') + (s[1]-'0');
    if(day!=0 && day<=months[month]) return true;
    return false;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    REP(i, n) {
        if(s[i]=='-') {
            x = i-2;
            if(0<=x && x+9<n) {
                tmp = s.substr(x, 10);
                if(fun(tmp)) mp[tmp]++;
            }
        }
    }
    string ans; int max = 0;
    for(auto x:mp) {
        if(x.S>max) {
            max = x.S; ans = x.F;
        }
    }
    cout << ans << endl;
}