// 02/07/2021
// https://codeforces.com/contest/1408/problem/A
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
const int mxn = 1e2+2;

int t(1), n, a[3][mxn], p[mxn];
void solve() {
    cin >> n;
    REP(i, 3) FOR(j, n) cin >> a[i][j];
    p[1] = a[0][1];
    for(int i=2;i<n;i++) {
        if(a[0][i]==p[i-1]) p[i] = a[1][i];
        else p[i] = a[0][i];
    }
    for(int i=0;i<3;i++) {
        if(a[i][n]!=p[1] && a[i][n]!=p[n-1]) p[n] = a[i][n];
    }
    FOR(i, n) cout << p[i] << " "; cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}