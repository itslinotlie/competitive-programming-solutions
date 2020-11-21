// 11/12/2020
// https://codeforces.com/contest/1255/problem/B
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


int t, n, m, x, sum;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> m; sum = 0;
        FOR(i, n) cin >> x, sum+=x;
        if(n<=2 || n>m) cout << "-1" << "\n";
        else {
            cout << 2*sum << "\n";
            FOR(i, n-1) cout << i << " " << i+1 << "\n";
            cout << 1 << " " << n << "\n";
        }
    }
}