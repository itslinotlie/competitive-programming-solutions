// 02/21/2021
// https://cses.fi/problemset/task/1071
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

int t(1), r, c;
void solve() {
    cin >> r >> c;
    ll mx = max(r, c), mn = min(r, c), cur = mx*mx-(mx-1);
    if(mx%2) { //up is inc
        if(r==mx) cout << cur-(mx-c) << endl;
        else cout << cur+(mx-r) << endl;
    } else { //up is dec
        if(r==mx) cout << cur+(mx-c) << endl;
        else cout << cur-(mx-r) << endl;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}