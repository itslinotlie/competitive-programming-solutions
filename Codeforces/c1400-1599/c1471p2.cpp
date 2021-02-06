// 02/03/2021
// https://codeforces.com/contest/1471/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second

int t(1), n, x, a;
void solve() {
    cin >> n >> x;
    ll sum = 0; deque<pii> qu;
    FOR(i, n) {
        cin >> a;
        qu.push_back({a, 1});
    }
    while(!qu.empty()) {
        pii u = qu.front();
        if(u.F%x==0) {
            sum+=u.F*u.S;
            qu.push_back({u.F/x, u.S*x});
            qu.pop_front();
        } else break;
    }
    while(!qu.empty()) {
        pii u = qu.front(); qu.pop_front();
        sum+=u.F*u.S;
    }
    cout << sum << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}