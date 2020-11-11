// 11/11/2020
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

int t, x, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> x; ans = 0x3f3f3f3f;
        for (int i=1;i<=sqrt(x);i++) {
            ans = min(ans, i-1 + (x-1)/i);
        } 
        cout << ans << "\n";
    }
}