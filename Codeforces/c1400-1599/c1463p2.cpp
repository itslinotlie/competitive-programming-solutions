// 02/07/2021
// https://codeforces.com/contest/1463/problem/B
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
const int mxn = 55;

int t(1), n, a[mxn]; ll odd, even;
void solve() {
    cin >> n; odd = even = 0;
    FOR(i, n) {
        cin >> a[i];
        if(i%2) odd+=a[i];
        else even+=a[i];
    }
    FOR(i, n) {
        if(even>odd) {
            cout << (i%2==0? a[i]:1) << " ";
        } else {
            cout << (i%2==0? 1:a[i]) << " ";
        }
    } cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}