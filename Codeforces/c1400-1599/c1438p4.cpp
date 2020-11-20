// 11/13/2020
// https://codeforces.com/contest/1438/problem/D
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

int n, x, a[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    if(n%2==0) {
        FOR(i, n) x^=a[i];
        if(x) return 0 * puts("NO");
    } 
    cout << "YES\n";
    x = (n-1)/2;
    cout << 2*x << "\n";
    REP(i, x) cout << 2*i+1 << " " << 2*i+2 << " " << n << "\n";
    REP(i, x) cout << 2*i+1 << " " << 2*i+2 << " " << n << "\n";
}