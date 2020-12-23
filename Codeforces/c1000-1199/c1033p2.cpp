// 12/22/2020
// https://codeforces.com/contest/1033/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second


int t(1); ll a, b;
bool prime(ll x) {
    for(int i=2;i<=sqrt(x);i++) {
        if(x%i==0) return false;
    } return true;
}
void solve() {
    cin >> a >> b;
    cout << (a-b==1 && prime(a+b)? "YES":"NO") << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}