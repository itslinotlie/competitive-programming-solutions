// 02/04/2021
// https://codeforces.com/contest/1462/problem/A
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
const int mxn = 3e2+2;

int t(1), n, a[mxn];
void solve() {
    cin >> n;
    FOR(i, n) cin >> a[i];
    for(int l=1,r=n;l<=r;) {
        cout << a[l++] << " ";
        if(l<r) cout << a[r--] << " ";
    } cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}