// 11/20/2020
// https://codeforces.com/contest/1266/problem/B
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


int t(1); ll n;
void solve() { //sum of any stacked dice is 14, top is 14 + 1<=x<=6
    cin >> n;
    if(n%14==0 || n<14 || n%14>6) cout << "NO\n";
    else cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}