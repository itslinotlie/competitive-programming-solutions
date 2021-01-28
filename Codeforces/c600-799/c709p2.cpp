// 11/10/2020
// https://codeforces.com/contest/709/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
const int mxn = 1e5+5;

int n, x; ll a[mxn], sum, p1, p2, p3, p4, p5 = 0x3f3f3f3f;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    if(n==1) return 0 * puts("0");
    if(n==2) {cout << min(abs(a[0]-x), abs(a[1]-x)) << "\n"; return 0;}
    if(x<=a[0]) {cout << a[n-2] - x << "\n"; return 0;}
    if(x>=a[n-1]) {cout << x - a[1] << "\n"; return 0;}
    if(x<=a[1] && x>a[0]) p5 = a[n-1] - x;
    if(x>=a[n-2] && x<a[n-1]) p5 = x-a[0];
    p1 = 2*abs(x-a[0]) + abs(a[n-2]-x);
    p2 = 2*abs(x-a[1]) + abs(a[n-1]-x);
    p3 = 2*abs(x-a[n-1]) + abs(a[1]-x);
    p4 = 2*abs(x-a[n-2]) + abs(a[0]-x);
    cout << min(p5, min(p1, min(p2, min(p3, p4)))) << "\n";
}
