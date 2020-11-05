// 10/20/2020
// https://codeforces.com/contest/1433/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 55;

int t, n, a[mxn], cnt, b, ans;
int main() {
    cin >> t;
    while(t--) { ans=0;
        cin >> n; b = 0; cnt=0;
        FOR(i, n) {
            cin >> a[i];
            if(a[i] &&!b) b=1;
            else if(!a[i]&&b) cnt++;
            else if(a[i]&&b) {
                ans+=cnt; cnt=0;
                b=1;
            }
        }
        cout << ans << endl;
    }
}