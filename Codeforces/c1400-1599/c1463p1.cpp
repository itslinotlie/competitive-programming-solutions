// 02/07/2021
// https://codeforces.com/contest/1463/problem/A
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


int t(1), a, b, c;
void solve() {
    cin >> a >> b >> c;
    if((a+b+c)%9) cout << "NO\n";
    else cout << (min(a, min(b, c))>=(a+b+c)/9? "YES\n":"NO\n");
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}