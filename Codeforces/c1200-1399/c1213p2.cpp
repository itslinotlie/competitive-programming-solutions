// 11/03/2020
// https://codeforces.com/contest/1213/problem/B
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
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
const int m4i[4]={-1, 0, 1, 0}, m4j[4]={0, 1, 0, -1};
const int m8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, m8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
const int mxn = 1.5e5;

int t, n, ans;
int main() {
    cin >> t;
    while(t--) { ans = 0;
        cin >> n; stack<int> mono;
        for (int i=1, x;i<=n;i++) {
            cin >> x;
            while(!mono.empty() && mono.top()>x) mono.pop(), ans++;
            mono.push(x);
        }
        cout << ans << endl;
    }
}