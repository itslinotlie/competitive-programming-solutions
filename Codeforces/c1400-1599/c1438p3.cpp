// 11/13/2020
// https://codeforces.com/contest/1438/problem/C
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
const int mxn = 105;

int t, n, m, a[mxn][mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> m;
        FOR(i, n) FOR(j, m) {
            cin >> a[i][j];
            if((i+j)%2 && a[i][j]%2==0) a[i][j]++;
            else if((i+j)%2==0 && a[i][j]%2) a[i][j]++; 
        }
        FOR(i, n) {
            FOR(j, m) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}