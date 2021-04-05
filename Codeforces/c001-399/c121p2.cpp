// 03/28/2021
// https://codeforces.com/contest/121/problem/B
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

int n, k, idx, flag; string s; 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> s;
    for(int i=0;i<n && k;i++) {
        if(s[i]=='4' && s[i+1]=='7' && s[i+2]=='7' && !(i&1)) k%=2;
        if(k && s[i]=='4' && s[i+1]=='7') {
            if(i%2) s[i] = s[i+1];
            else s[i+1] = s[i];
            i-=2; k--;
        }
    }
    cout << s << endl;
}
