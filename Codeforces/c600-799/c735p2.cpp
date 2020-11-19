// 10/15/2020
// https://codeforces.com/contest/735/problem/B
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
const int mxn = 1e5+5;

int n, n1, n2; double a[mxn], ans, x, y, z;
int main() {
    cin >> n >> n1 >> n2;
    FOR(i, n) cin >> a[i];
    sort(a+1, a+n+1);
    int i=n;
    for (int cnt=min(n1, n2);cnt>0;i--,cnt--) {
        x+=a[i];
    } x/=min(n1, n2);
    for (int cnt=max(n1, n2);cnt>0;i--, cnt--) {
        y+=a[i];
    } y/=max(n1, n2);
    cout << setprecision(10) << fixed << x+y << "\n";
}