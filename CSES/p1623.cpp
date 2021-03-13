// 03/04/2021
// https://cses.fi/problemset/task/1623
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 20;

int n; ll a[mxn], ans = 0x3f3f3f3f3f3f3f3f;
void fun(ll lft, ll rit, int pos) {
    if(pos>=n) {
        ans = min(ans, abs(lft-rit));
        return;
    }
    fun(lft+a[pos], rit, pos+1);
    fun(lft, rit+a[pos], pos+1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) cin >> a[i];
    fun(0, a[0], 1);
    fun(a[0], 0, 1);
    cout << ans << endl;
}