// 10/19/2020
// https://codeforces.com/contest/842/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

ll l, r, x, y, k, ans;
int main() {
    cin >> l >> r >> x >> y >> k;
    for (int i=x;i<=y;i++) {
        if(l<=i*k && i*k<=r) ans = 1;
    }
    puts(ans? "YES":"NO");
}