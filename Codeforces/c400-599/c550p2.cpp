// 11/09/2020
// https://codeforces.com/contest/550/problem/B
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
const int mxn = 16;

int n, l, r, x, a[mxn], ans;
void fun(int len, ll sum, int mini, int maxi) {
    if(len==n) {
        if(l<=sum && sum<=r && maxi-mini>=x) ans++;
        return;
    }
    fun(len+1, sum+a[len], min(mini, a[len]), max(maxi, a[len]));
    fun(len+1, sum, mini, maxi); 
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> l >> r >> x;
    REP(i, n) cin >> a[i];
    fun(1, a[0], a[0], a[0]);
    fun(1, 0, 0x3f3f3f3f, 0);
    cout << ans << endl;
}