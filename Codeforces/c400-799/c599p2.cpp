// 10/25/2020
// https://codeforces.com/contest/599/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 1e5+5;

int n, m, f[mxn], b[mxn], ans[mxn];
int main() {
    cin >> n >> m;
    FOR(i, n) cin >> f[i];
    FOR(i, m) cin >> b[i];
    FOR(i, n) {
        if(ans[f[i]]==0) ans[f[i]] = i;
        else if(ans[f[i]]>0) ans[f[i]] = -1;
    }
    FOR(i, m) {
        if(ans[b[i]]==0) return 0 * puts("Impossible");
    }
    FOR(i, m) {
        if(ans[b[i]]<0) return 0 * puts("Ambiguity");
    }
    puts("Possible");
    FOR(i, m) cout << ans[b[i]] << " "; cout << endl;
}