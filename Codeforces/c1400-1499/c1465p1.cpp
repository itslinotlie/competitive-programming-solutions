// 12/22/2020
// https://codeforces.com/contest/1465/problem/A
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
    cin >> n >> s; int cnt = 0;
    for(int i=n-1;i>=0;i--) {
        if(s[i]==')') cnt++;
        else break;
    }
    if(cnt>n/2) cout << "Yes\n";
    else cout <<  "No\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}