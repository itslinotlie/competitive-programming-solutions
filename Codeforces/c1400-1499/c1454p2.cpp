// 04/30/2021
// https://codeforces.com/contest/1454/problem/B
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
const int mxn = 2e5+5;

int t(1), n, a[mxn];
void solve() {
    cin >> n; map<int, int> mp;
    FOR(i, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = -1, mini = 0x3f3f3f3f;
    for(auto x:mp) {
        if(x.S==1) {
            if(x.F<mini) {
                mini = x.F;
                ans = x.F;
            }
        }
    }
    if(ans==-1) cout << "-1\n";
    else {
        FOR(i, n) {
            if(a[i]==ans) {
                cout << i << "\n";
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}