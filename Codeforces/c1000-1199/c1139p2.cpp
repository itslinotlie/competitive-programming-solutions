// 12/22/2020
// https://codeforces.com/contest/1139/problem/B
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
const int mxn = 2e5+5;

int n, a[mxn]; ll ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    int prv = 0x3f3f3f3f;
    for(int i=n;i>=1;i--) {
        prv = max(0, min(prv-1, a[i]));
        ans+=prv;
    }
    cout << ans << endl;
}