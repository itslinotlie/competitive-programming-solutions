// 05/17/2021
// https://dmoj.ca/problem/ccc21j4
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

int L, M, S, ml, sl, sm, ms; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    for(char c:s) {
        if(c=='L') L++;
        if(c=='M') M++;
        if(c=='S') S++;
    }
    for(int i=0;i<L;i++) {
        if(s[i]=='M') ml++;
        if(s[i]=='S') sl++;
    }
    for(int i=L;i<L+M;i++) {
        if(s[i]=='S') sm++;
    }
    for(int i=L+M;i<L+M+S;i++) {
        if(s[i]=='M') ms++;
    }
    cout << ml + sl + max(sm, ms) << "\n";
}