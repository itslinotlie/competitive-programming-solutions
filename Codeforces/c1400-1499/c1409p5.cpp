// 05/18/2021
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

int t(1), n, k;
void solve() {
    cin >> n >> k;
    vector<int> x(n), y(n), l(n), r(n);
    for(auto &a:x) cin >> a;
    for(auto &a:y) cin >> a; //since it falls, y doesn't matter
    sort(x.begin(), x.end());
    int lft = n-1, rit = n -1;
    for(;lft>=0;lft--) {
        while(x[rit]-x[lft]>k) rit--;
        r[lft] = rit-lft+1;
        if(lft+1<n) r[lft] = max(r[lft], r[lft+1]);
    }
    lft = 0; rit = 0;
    for(;lft<n;lft++) {
        while(x[lft]-x[rit]>k) rit++;
        l[lft] = lft-rit+1;
        if(lft>0) l[lft] = max(l[lft], l[lft-1]);
    }
    int ans = 1;
    REP(i, n-1) ans = max(ans, r[i+1]+l[i]);
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}