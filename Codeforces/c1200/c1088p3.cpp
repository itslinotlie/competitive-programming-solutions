// 10/16/2020
// https://codeforces.com/contest/1088/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mxn = 2e3+5;

long long n, cnt, a[mxn], sum, mod; string ans;
int main() {
    cin >> n; mod = n;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=n;i>=1;i--) {
        ll tmp = ((mod-(a[i]+sum)%(n+1))+(n+1))%(n+1);
        if(tmp) cnt++, ans+="1 "+to_string(i)+" "+to_string(tmp)+"\n";
        sum=(sum+tmp)%(n+1);
        mod--;
    }
    if(cnt==0) {cout << 0 << endl; return 0;}
    cout << cnt+1 << "\n" << ans;
    cout << 2 << " " << n << " " << n+1 << endl;
}