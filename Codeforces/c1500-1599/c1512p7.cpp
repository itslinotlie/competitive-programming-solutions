// 04/11/2021
// https://codeforces.com/contest/1512/problem/G
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
const int mxn = 1e7+7;

int t(1), x, a[mxn], b[mxn];
void init() {
    memset(b, 0x3f, sizeof(b));
    for(int i=1;i<mxn;i++) {
        for(int j=i;j<mxn;j+=i) a[j]+=i;
    }
    for(int i=1;i<mxn;i++) {
        if(a[i]<mxn) b[a[i]] = min(b[a[i]], i);
    }
}
void solve() {
    cin >> x;
    cout << (b[x]>mxn? -1:b[x]) << "\n";
    FOR(i, 10) cout << a[i] << " "; cout << "\n";
    FOR(i, 10) cout << b[i] << " "; cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t; init();
    for (int i=1;i<=t;i++) {
        solve();
    }
}