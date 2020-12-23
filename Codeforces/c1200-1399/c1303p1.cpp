// 12/21/2020
// https://codeforces.com/contest/1303/problem/A
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


int t(1), n, cnt; string s;
void solve() {
    cin >> s; n = s.size(); cnt = 0;
    int l=0, r=n-1;
    for(;l<=r;) {
        if(s[l]=='0') l++;
        else if(s[r]=='0') r--;
        else break;
    }
    for(int i=l;i<=r;i++) {
        if(s[i]=='0') cnt++;
    }
    cout << cnt << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}