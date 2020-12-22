// 11/22/2020
// https://codeforces.com/contest/1451/problem/C
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
const int mxn = 1e6+6;

int t(1), n, k, x[27], y[27], flag; string a, b;
void solve() {
    cin >> n >> k >> a >> b;
    CLR(x); CLR(y);
    REP(i, n) x[a[i]-'a']++;
    REP(i, n) y[b[i]-'a']++;
    flag = false;
    REP(i, 26) {
        if(x[i]<y[i] || (x[i]-=y[i])%k) flag = true;
        x[i+1]+=x[i];
    }
    cout << (flag? "No":"Yes") << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}