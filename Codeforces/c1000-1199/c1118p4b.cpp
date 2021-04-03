// 03/18/2021
// https://codeforces.com/contest/1118/problem/D2
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

int n, m; ll sum; vector<int> vec;
bool fun(int x) {
    ll tot = 0;
    for(int i=0;i<n;i++) tot+=max(0, vec[i]-i/x);
    return tot>=m;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m; vec.resize(n);
    for(auto &x:vec) {cin >> x; sum+=x;}
    sort(vec.rbegin(), vec.rend());
    if(sum<m) {cout << -1 << endl; return 0;}
    int lo = 1, hi = n;
    while(hi-lo>1) {
        int mid = (lo+hi)/2;
        if(fun(mid)) hi = mid;
        else lo = mid;
    }
    if(fun(lo)) cout << lo << endl;
    else cout << hi << endl;
}