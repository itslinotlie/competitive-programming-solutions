// 03/17/2021
// https://codeforces.com/contest/1118/problem/B
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
const int mxn = 2e5+5;

int n, ans, a[mxn]; ll psa[2], ssa[2];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {cin >> a[i]; ssa[i%2]+=a[i];}
    FOR(i, n) {
        ssa[i%2]-=a[i];
        if(psa[0]+ssa[1]==psa[1]+ssa[0]) ans++;
        psa[i%2]+=a[i];
    } cout << ans << endl;
}