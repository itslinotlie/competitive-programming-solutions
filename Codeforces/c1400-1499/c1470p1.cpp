// 02/03/2021
// https://codeforces.com/contest/1470/problem/A
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
const int mxn = 3e5+5;

int t(1), n, m, k[mxn], c[mxn]; ll sum;
void solve() {
    cin >> n >> m;
    FOR(i, n) cin >> k[i];
    FOR(i, m) cin >> c[i];
    sum = 0; sort(k+1, k+1+n); reverse(k+1, k+1+n);
    priority_queue<int, vector<int>, greater<int>> pq;
    FOR(i, k[1]) pq.push(c[i]);
    FOR(i, n) {
        if(c[k[i]]<=pq.top()) sum+=c[k[i]];
        else {
            sum+=pq.top(); pq.pop();
        }
    }
    cout << sum << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}