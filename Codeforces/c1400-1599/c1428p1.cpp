// 10/17/2020
// https://codeforces.com/contest/1428/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int t, a[4], ans, b;
int main() {
    cin >> t;
    while(t--) { ans = 0; b = 0;
        for (int i=0;i<4;i++) cin >> a[i];
        if(a[0]!=a[2]) {
            ans+=abs(a[2]-a[0]);
            b = 1;
        } 
        if(a[1]!=a[3]) {
            ans+=abs(a[1]-a[3]);
            if(b) ans+=2;
        }
        cout << ans << endl;
    }
}