// 02/21/2021
// https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}

int n, x, ans; string s; char c('f');
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    REP(i, n) {
        if(s[i]==c) x++;
        else {
            ans = max(ans, x);
            c = s[i]; x = 1;
        }
    }
    cout << max(ans, x) << endl;
}