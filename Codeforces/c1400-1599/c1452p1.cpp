// 11/19/2020
// https://codeforces.com/contest/1452/problem/A
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

int t, x, y, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> x >> y; ans = 0;
        ans+=2*min(x, y);
        if(x!=y) ans+=(max(x, y)-min(x, y))*2-1;
        cout << ans << endl;
    }
}