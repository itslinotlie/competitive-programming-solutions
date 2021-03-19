// 03/19/2021
// https://codeforces.com/contest/888/problem/A
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
const int mxn = 1e3+3;

int n, ans, a[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    for(int i=2;i<n;i++) {
        if(min(a[i-1], a[i+1])>a[i]) ans++;
        if(max(a[i-1], a[i+1])<a[i]) ans++;
    }
    cout << ans << endl;
}