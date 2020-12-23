// 12/21/2020
// https://codeforces.com/contest/1303/problem/B
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


int t(1); ll n, g, b, ans;
void solve() {
    cin >> n >> g >> b; ans = 0;
    int good = (n+1)/2;
    cout << max(n, (good/g)*(g+b) + (good%g==0? -b:good%g)) << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}