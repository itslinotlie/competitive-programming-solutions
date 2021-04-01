// 03/29/2021
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

int t(1), n, k, ans, i; string s;
void calc(int idx) {
    ans++;
    if(idx+k>=n) return;
    // ans++;
    for(i=idx+k;i>idx;i--) {
        if(s[i]=='*') {calc(i); return;}
    }
}
void solve() {
    cin >> n >> k >> s; ans = i = 0;
    for(;i<n;i++) {
        if(s[i]=='*') {
            calc(i);
            break;
        }
    }
    for(int x=n-1;x>=0;x--) {
        if(s[x]=='*') {
            if(x!=i) ans++;
            break;
        }
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}