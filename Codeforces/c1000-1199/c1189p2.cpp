// 11/03/2020
// https://codeforces.com/contest/1189/problem/B
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int m4i[4]={-1, 0, 1, 0}, m4j[4]={0, 1, 0, -1};
const int m8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, m8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
const int mxn = 1e5+5;

int n, a[mxn];
int main() {
    cin >> n;
    REP(i, n) cin >> a[i];
    sort(a, a+n);
    if(a[n-1]>=a[n-2]+a[n-3]) return 0 * puts("NO");
    puts("YES");
    for (int i=n-1;i>-1;i-=2) cout << a[i] << " ";
    for (int i=n%2;i<n;i+=2) cout << a[i] << " ";
    cout << endl;
}