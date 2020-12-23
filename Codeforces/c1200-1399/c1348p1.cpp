// 12/22/2020
// https://codeforces.com/contest/1348/problem/A
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


int t(1), n; ll l, r;
void solve() {
    cin >> n; 
    l = 1<<n, r = 0;
    for(int i=1;i<n;i++) {
        if(i<n/2) l+=1<<i;
        else r+=1<<i;
    }
    cout << abs(l-r) << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}