// 11/17/2020
// https://codeforces.com/contest/1266/problem/C
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
const int mxn = 505;

ll r, c, ans[2][mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c;
    if(r==1 && c==1) {cout << "0\n"; return 0;}
    if(r==1) {
        FOR(i, c) cout << i+1  << " "; cout << endl;
        return 0;
    }
    if(c==1) {
        FOR(i, r) cout << i+1 << endl;
        return 0;
    }
    FOR(i, r) ans[0][i] = i;
    FOR(i, c) ans[1][i] = i+r;
    FOR(i, r) {
        FOR(j, c) {
            cout << ans[0][i]*ans[1][j] << " ";
        } cout << endl;
    }
}