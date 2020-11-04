// 10/11/2020
// https://codeforces.com/contest/1209/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mxn = 105;

int n, a[mxn], ans;
int main() {
    cin >> n;
    FOR(i, n) cin >> a[i];
    while(true) {
        sort(a+1, a+n+1);
        FOR(i, n) {
            if(a[1]==0x3f3f3f3f) {cout << ans << "\n"; return 0;}
            FORE(j, i+1, n) {
                if(a[j]%a[i]==0) a[j]=0x3f3f3f3f;
            }
        }
        a[1] = 0x3f3f3f3f;
        ans++;
    }
}