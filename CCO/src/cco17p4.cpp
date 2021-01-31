// 01/23/2021
// https://dmoj.ca/problem/cco17p4
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
const int mxn = 5e2+5;

int n, h[mxn]; bool dp[mxn][50*mxn]; unordered_set<int> st;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) cin >> h[i];
    sort(h, h+n, greater<int>()); //greater go first
    dp[0][0] = true; int vol = h[0]*n;
    for(int i=1;i<n;i++) {
        int cur = h[i];
        for(int j=0;j<=vol;j++) dp[i][j] = dp[i-1][j];
        for(int pre:st) {
            int dif = pre - cur;
            for(int j=0;j<=vol-dif;j++) {
                if(dp[i-1][j]) dp[i][j+dif] = true;
            }
        }
        st.insert(cur);
    }
    for(int i=0;i<=vol;i++) {
        if(dp[n-1][i]) cout << i << " ";
    } cout << "\n";
}