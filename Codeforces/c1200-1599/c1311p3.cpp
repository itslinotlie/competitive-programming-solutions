// 10/24/2020
// https://codeforces.com/contest/1311/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 2e5+5;

int t, n, m, psa[mxn], ans[26], p[mxn]; string s;
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> m >> s;
        CLR(psa); CLR(ans);
        REP(i, m) cin >> p[i], psa[p[i]-1]++;
        for (int i=n-1;i>=0;i--) psa[i-1]+=psa[i];
        REP(i, n) ans[s[i]-'a']+=psa[i] + 1;
        REP(i, 26) cout << ans[i] << " "; cout << endl;
    }
}