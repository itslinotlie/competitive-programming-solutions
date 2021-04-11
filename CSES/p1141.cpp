// 03/15/2021
// https://cses.fi/problemset/task/1141
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

int n, x, ans, a[mxn]; map<int, int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i];
    int l = 1, r = 1;
    while(r<=n) {
        mp[a[r]]++;
        while(mp[a[r]]>1 && l<=r) mp[a[l++]]--;
        ans = max(ans, r++-l+1); 
    }
    cout << ans << endl;
}