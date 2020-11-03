// 10/15/2020
// // https://codeforces.com/contest/919/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second

int n, m; double a, b, ans=0x3f3f3f3f;
int main() {
    cin >> n >> m;
    FOR(i, n) {
        cin >> a >> b;
        ans = min(ans, m/(b/a));
    }
    cout << setprecision(10) << fixed << ans << endl;
}