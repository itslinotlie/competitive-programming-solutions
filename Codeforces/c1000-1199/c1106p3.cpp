// 12/22/2020
// https://codeforces.com/contest/1106/problem/C
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
const int mxn = 3e5+5;

int n, a[mxn]; ll ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    for(int i=0;i<n/2;i++) {
        ans+=pow(a[i]+a[n-i-1], 2);
    }
    cout << ans << endl;
}