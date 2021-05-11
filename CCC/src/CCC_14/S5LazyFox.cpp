// 01/23/2021
// https://dmoj.ca/problem/ccc14s5
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int, int>> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
const int mxn = 2e3+3;

int n, x[mxn], y[mxn], mx[mxn], dp[mxn], tmp[mxn]; vector<pii> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> x[i] >> y[i];
        for(int j=0;j<i;j++) {
            int d = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            vec.push_back({d, {j, i}});
        }
    }
    sort(vec.begin(), vec.end());
    for(pii e:vec) {
        int d = e.F, u = e.S.F, v = e.S.S;
        if(d>mx[u]) {mx[u] = d; tmp[u] = dp[u];}
        if(d>mx[v]) {mx[v] = d; tmp[v] = dp[v];}
        dp[u] = max(dp[u], tmp[v]+1);
        if(u!=0) dp[v] = max(dp[v], tmp[u]+1);
    }
    cout << dp[0] << endl;
}