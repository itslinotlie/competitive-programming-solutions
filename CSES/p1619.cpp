// 03/10/2021
// https://cses.fi/problemset/task/1619
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

int n, a, b, cnt, ans; vector<pii> psa;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) {
        cin >> a >> b;
        psa.push_back({a, 1});
        psa.push_back({b+1, -1});
    } sort(psa.begin(), psa.end());
    for(auto x:psa) ans = max(ans, (cnt+=x.S));
    cout << ans << "\n";
}