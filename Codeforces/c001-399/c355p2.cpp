// 11/15/2020
// https://codeforces.com/contest/355/problem/B
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
const int mxn = 1e3+5;

int c[4], n, m, a[2][mxn], ans;
int fun(int x, int len) {
    int sum = 0;
    REP(i, len) {
        sum += min(c[1], a[x][i]*c[0]);
    }
    return min(sum, c[2]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    REP(i, 4) cin >> c[i];
    cin >> n >> m;
    REP(i, n) cin >> a[0][i];
    REP(i, m) cin >> a[1][i];
    cout << min(c[3], fun(0, n)+fun(1, m)) << "\n";
}