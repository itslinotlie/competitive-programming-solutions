// 11/07/2020
// https://codeforces.com/contest/934/problem/A
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
const int mxn = 55;

int n, m; vector<ll> a, b; ll ans = 0x3f3f3f3f3f3f3f3f;
int main() { //bruce force :D
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m; a.resize(n); b.resize(m);
    for (auto &x:a) cin >> x;
    for (auto &x:b) cin >> x;
    REP(i, n) {
        ll tmp = -0x3f3f3f3f3f3f3f3f;
        REP(j, n) if(i!=j)
            REP(k, m) {
                tmp = max(tmp, a[j]*b[k]);
            }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}