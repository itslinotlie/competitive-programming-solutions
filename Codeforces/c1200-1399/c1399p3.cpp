// 02/07/2021
// https://codeforces.com/contest/1399/problem/C
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
const int mxn = 2*5e2+2;

int t(1), n, x, frq[mxn], mx; map<int, int> mp; 
void solve() {
    cin >> n; mp.clear(); CLR(frq); mx = 0;
    FOR(i, n) {
        cin >> x;
        mp[x]++;
    }
    for(auto x:mp) {
        for(auto y:mp) {
            if(x.F!=y.F) frq[x.F+y.F]+=min(x.S, y.S);
        }
        frq[2*x.F]+=x.S;
    }
    for(auto x:frq) mx = max(mx, x);
    cout << mx/2 << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}