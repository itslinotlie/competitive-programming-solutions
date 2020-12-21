// 11/12/2020
// https://codeforces.com/contest/1325/problem/B
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

int t, n, a[mxn]; set<int> sett;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n; sett.clear();
        FOR(i, n) cin >> a[i], sett.insert(a[i]);
        cout << sett.size() << endl;
    }  
}