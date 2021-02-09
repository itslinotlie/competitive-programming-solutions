// 02/07/2021
// https://codeforces.com/contest/1138/problem/A
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
const int mxn = 1e5+5;

int t(1), n, a[mxn], one, two, x, ans;
void solve() {
    cin >> n;
    FOR(i, n) cin >> a[i];
    one = a[1]==1; two = a[1]==2;
    for(int i=2;i<=n;i++) {
        if(a[i-1]+a[i]==2) one++;
        else if(a[i-1]+a[i]==4) two++;
        else if(a[i-1]==2) one = 1;
        else two = 1;
        x = min(one, two); ans = max(ans, x);
    }
    cout << 2*ans << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    // cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}