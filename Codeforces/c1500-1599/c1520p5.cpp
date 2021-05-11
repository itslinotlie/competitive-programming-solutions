// 05/09/2021
// https://codeforces.com/contest/1520/problem/E
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

int t(1), n; string s; ll ans;
void solve() { ans = 0;
    cin >> n >> s;
    int cnt = 0;
    for(auto x:s) cnt+=(x=='*');
    int pos = -1, cur = -1;
    REP(i, n) {
        if(s[i]=='*') {
            cur++;
            if(cur==cnt/2) pos = i;
        }
    }
    cur = pos - cnt/2;
    REP(i, n) {
        if(s[i]=='*') {
            ans+=abs(cur-i);
            cur++;
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