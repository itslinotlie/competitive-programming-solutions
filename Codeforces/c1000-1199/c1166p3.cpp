// 02/07/2021
// https://codeforces.com/contest/1166/problem/C
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
const int mxn = 2e5+5;

int n, a[mxn]; ll ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> a[i];
        a[i] = abs(a[i]);
    }
    sort(a+1, a+1+n);
    int l=1, r=1;
    for(;l<=n;l++) {
        while(r<=n && a[r]<=2*a[l]) r++;
        ans+=(r-l-1);
    }
    cout << ans << endl;
}