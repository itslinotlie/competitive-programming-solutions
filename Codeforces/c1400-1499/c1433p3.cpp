// 10/20/2020
// https://codeforces.com/contest/1433/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 3e5+5;

int t, n, a[mxn], maxi, b, id;
int main() {
    cin >> t;
    while(t--) {
        cin >> n; b = 1; id = 1;
        memset(a, 0, sizeof(a));
        for (int i=1;i<=n;i++) cin >> a[i];
        for (int i=2;i<=n;i++) {
            if(a[id]!=a[i]) b=0;
            if(a[i]>a[id]) id = i;
        }
        if(!b) {
            for (int i=2;i<n;i++) {
                if(a[i]==a[id] && (a[i]>a[i-1] || a[i]>a[i+1])) {id = i; break;}
            }
        }
        if(b) puts("-1");
        else cout << id << endl;
    }
}