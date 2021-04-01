// 02/09/2021
// http://codeforces.com/contest/1418/problem/B
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

int t(1), n, x; 
void solve() {
    cin >> n; vector<int> a(n+1), b(n+1), c;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) {
        if(b[i]==0) c.push_back(a[i]);
    }
    sort(c.rbegin(), c.rend()); int index = 0;
    for(int i=0;i<n;i++) {
        if(b[i]==1) cout << a[i] << " ";
        else cout << c[index++] << " ";
    } cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}