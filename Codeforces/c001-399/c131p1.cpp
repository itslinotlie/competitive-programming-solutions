// 03/04/2021
// https://codeforces.com/contest/131/problem/A
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

string s; int n; bool lower, flag;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    lower = ('a'<=s[0] && s[0]<='z');
    for(int i=1;i<n;i++) {
        if('a'<=s[i] && s[i]<='z') flag = true;
    }
    if(lower && !flag) {
        cout << string(1, 'A'+(s[0]-'a'));
        for(int i=1;i<n;i++) cout << string(1, 'a'+(s[i]-'A'));
        cout << endl;
    } else if(!flag) {
        for(int i=0;i<n;i++) cout << string(1, 'a'+(s[i]-'A'));
        cout << endl;
    } else cout << s << endl;
}