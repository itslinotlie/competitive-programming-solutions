// 03/29/2021
// https://codeforces.com/contest/1506/problem/E
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

int t(1), n, a[mxn], b[mxn], c[mxn]; set<int> sett1, sett2;
void solve() {
    cin >> n; sett1.clear(); sett2.clear();
    FOR(i, n) {
        cin >> a[i];
        sett1.insert(i);
        sett2.insert(i);
    }
    FOR(i, n) {
        if(sett1.find(a[i])!=sett1.end()) {b[i] = a[i]; sett1.erase(sett1.find(a[i]));}
        else {
            auto it = sett1.upper_bound(a[i]); it--;
            b[i] = *it;
            sett1.erase(it);
        }
        if(sett2.find(a[i])!=sett2.end()) {c[i] = a[i]; sett2.erase(sett2.find(a[i]));}
        else {
            c[i] = *sett2.upper_bound(0); sett2.erase(sett2.upper_bound(0));
        }
    }
    FOR(i, n) cout << c[i] << " "; cout << endl;
    FOR(i, n) cout << b[i] << " "; cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}