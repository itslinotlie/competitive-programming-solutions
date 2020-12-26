// 12/20/2020
// https://codeforces.com/contest/365/problem/B
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

int n, a[mxn], ans, maxi;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    for (int i=3;i<=n;i++) {
        if(a[i]==a[i-1]+a[i-2]) ans++;
        else {
            maxi = max(maxi, ans+2);
            ans = 0;
        }
    }
    if(n==1) cout << 1 << endl;
    else if(n==2) cout << 2 << endl;
    else cout << max(maxi, ans+2) << endl;
}