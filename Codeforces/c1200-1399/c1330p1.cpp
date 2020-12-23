// 12/22/2020
// https://codeforces.com/contest/1330/problem/A
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
const int mxn = 305;

int t(1), n, x, a[mxn], psa[mxn];
void solve() {
    cin >> n >> x; CLR(psa);
    FOR(i, n) cin >> a[i], psa[a[i]] = 1;
    for(int i=1;i<mxn;i++) psa[i]+=psa[i-1];
    for(int i=mxn;i>=1;i--) {
        if(psa[i]+x>=i) {
            cout << i << endl;
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}