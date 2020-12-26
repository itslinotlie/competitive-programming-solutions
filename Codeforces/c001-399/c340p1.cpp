// 10/19/2020
// https://codeforces.com/contest/340/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int x, y, a, b; ll k;
int main() {
    cin >> x >> y >> a >> b;
    k = (x*y)/__gcd(x, y);
    int o = ceil((double)a/k), t = floor((double)b/k);
    cout << t - o + 1<< endl;
}