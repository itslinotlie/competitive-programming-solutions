// 04/08/2021
// https://cses.fi/problemset/task/1660
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

int n, a[mxn]; ll x, sum, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    FOR(i, n) cin >> a[i];
    int l = 1, r = 1;
    for(;r<=n;r++) {
        sum+=a[r];
        while(sum>=x) {
            if(sum==x) ans++;
            sum-=a[l++];
        }
    }
    cout << ans << endl;
}