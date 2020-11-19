// 10/20/2020
// https://codeforces.com/contest/1433/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 5e3+5;

int t, n, a[mxn], b[mxn], s, same, x, y;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> a[1]; s = a[1]; same = 1;
        for(int i=2;i<=n;i++) {
            cin >> a[i];
            if(s!=a[i]) same = 0;
        }
        if(same) puts("NO");
        else {
            puts("YES");
            x = 1;
            for(int i=2;i<=n;i++) {
                if(a[x]!=a[i]) cout << x << " " << i << endl, y = i;
            }
            for (int i=2;i<=n;i++) {
                if(a[i]==a[x]) cout << y << " " << i << endl;
            }
        }
    }
}