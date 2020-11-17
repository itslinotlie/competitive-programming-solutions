// 11/13/2020
// https://codeforces.com/contest/242/problem/B
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

int n, a[mxn], b[mxn], mini, maxi, ans, idx;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i] >> b[i];
    mini = a[1]; maxi = b[1];
    FOR(i, n) mini = min(mini, a[i]), maxi = max(maxi, b[i]);
    FOR(i, n) {
        if(a[i]==mini && b[i]==maxi) ans = 1, idx = i;
    }
    cout << (ans? idx:-1) << "\n";
}