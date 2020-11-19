// 10/15/2020
// https://codeforces.com/contest/987/problem/B
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

ll x, y; long double a, b;
int main() { //math sol is too orz
    cin >> x >> y;
    a = x*log(y);
    b = y*log(x);
    if(abs(a-b) < 1e-8) puts("=");
    else if(a<b) puts(">");
    else puts("<");
}