// 03/15/2021
// https://cses.fi/problemset/task/1629
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

int n, val, ans; vector<pii> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; vec.resize(n);
    for(auto &x:vec) cin >> x.F >> x.S;
    sort(vec.begin(), vec.end(), [](pii a, pii b) -> bool {
        if(a.S==b.S) return a.F<b.F;
        return a.S<b.S;
    });
    REP(i, n) {
        if(vec[i].F>=val) {
            val = vec[i].S; ans++; 
        }
    }
    cout << ans << endl;
}