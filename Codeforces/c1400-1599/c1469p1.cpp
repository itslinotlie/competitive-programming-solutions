// 02/09/2021
// https://codeforces.com/contest/1469/problem/A
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


int t(1), n; string s; 
void solve() {
    cin >> s; n = s.size();
    if(s[0]==')' || s[n-1]=='(' || n%2)cout << "NO\n"; 
    else cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}