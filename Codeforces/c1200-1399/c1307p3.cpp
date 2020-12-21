// 11/21/2020
// https://codeforces.com/contest/1307/problem/C
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


int t(1), n; string s; ll frq[26], ans[26][26], maxi;
void solve() {
    cin >> s; n = s.size();
    REP(i, n) {
        char c = s[i]-'a';
        REP(j, 26) ans[j][c]+=frq[j];
        frq[c]++;
    }
    maxi = *max_element(frq, frq+26);
    REP(i, 26) REP(j, 26) maxi = max(maxi, ans[i][j]);
    cout << maxi << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i=1;i<=t;i++) {
        solve();
    }
}