// 10/12/2020
// https://codeforces.com/contest/799/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second

int n, t, k, d; ll x;
int main() {
    cin >> n >> t >> k >> d;
    x = ceil((double)d/t);
    n-=(x*k);
    if(n>0) {
        if(d%t || n>k) puts("YES");
        else puts("NO");
    } else puts("NO");
}