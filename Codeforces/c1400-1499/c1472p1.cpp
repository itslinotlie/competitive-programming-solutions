// 02/03/2021
// https://codeforces.com/contest/1472/problem/A
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


int t(1), w, h, n;
void solve() {
    cin >> w >> h >> n;
    int x = 1;
    while(w%2==0) {
        w/=2; x*=2;
    }
    while(h%2==0) {
        h/=2; x*=2;
    }
    if(x>=n) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}