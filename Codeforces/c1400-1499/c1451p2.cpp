// 11/21/2020
// https://codeforces.com/contest/1451/problem/B
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


int t(1), n, q, l, r, b; string s;
void solve() {
    cin >> n >> q >> s;
    FOR(i, q) { b = 1;
        cin >> l >> r; l--; r--;
        for (int j=0;j<l && b;j++) {
            if(s[j]==s[l]) b = false;
        }
        for (int j=r+1;j<n && b;j++) {
            if(s[j]==s[r]) b = false;
        }
        cout << (b? "NO":"YES") << endl;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}