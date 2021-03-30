// 03/24/2021
// https://codeforces.com/contest/1496/problem/B
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

int t(1), n, k, x, mex; set<int> sett;
void solve() {
    cin >> n >> k; sett.clear();
    FOR(i, n) {
        cin >> x;
        sett.insert(x);
    }
    mex = 0;
    for(auto x:sett) {
        if(mex==x) mex++;
        else break;
    }
    if(k==0) cout << n << "\n";
    else if(mex!=sett.size()) {
        x = (mex+*prev(sett.end())+1)/2;
        sett.insert(x);
        cout << sett.size() << "\n";
    } else cout << sett.size()+k << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}