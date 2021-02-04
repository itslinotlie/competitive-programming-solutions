// 02/03/2021
// https://codeforces.com/contest/1472/problem/D
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
const int mxn = 2e5+5;

int t(1), n, a[mxn]; bool dp[mxn]; ll odd, even;
void solve() {
    cin >> n; CLR(a); CLR(dp); odd = even = 0;
    FOR(i, n) cin >> a[i];
    sort(a+1, a+1+n); reverse(a+1, a+1+n);
    for(int i=1;i<=n;i++) {
        if(i%2) { //even turn
            if(a[i]%2==0) even+=a[i];            
        } else { //odd turn
            if(a[i]%2==1) odd+=a[i];
        }
    }
    if(even>odd) cout << "Alice\n";
    else if(odd>even) cout << "Bob\n";
    else cout << "Tie\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}