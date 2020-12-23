// 12/22/2020
// https://codeforces.com/contest/1033/problem/A
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
const int mxn = 1e3+3;

int n, u, v, ans; pii a[3], d[2];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, 3) {
        cin >> u >> v;
        a[i] = {u, v};
    }
    d[0] = {a[0].F-a[1].F, a[0].S-a[1].S};
    d[1] = {a[0].F-a[2].F, a[0].S-a[2].S};
    if(d[0].F*d[1].F>0 && d[0].S*d[1].S>0) cout << "YES\n";
    else cout << "NO\n";
}