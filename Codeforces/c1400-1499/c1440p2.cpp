// 11/17/2020
// https://codeforces.com/contest/1440/problem/B
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
const int mxn = 1e6+6;

int t, n, k, a[mxn], cnt; ll ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> k; ans = 0, cnt = 0;
        FOR(i, n*k) cin >> a[i];
        for (int i=n*k-n/2;i>0;i-=(n+1)/1) {
            ans+=a[i]; cnt++;
            if(cnt==k) break;
        }
        cout << ans << endl;
    }
}