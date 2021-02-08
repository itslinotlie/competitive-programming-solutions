// 02/05/2021
// https://codeforces.com/contest/1474/problem/B
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

int t(1), x; ll ans, p1, p2;
bool isPrime(int x) {
    for(int i=2;i<=sqrt(x);i++) {
        if(x%i==0) return false;
    } return true;
}
ll prime(int x) {
    for(int i=x;;i++) {
        if(isPrime(i)) return i;
    }
}
void solve() {
    cin >> x; ans = 1;
    p1 = prime(1+x);
    p2 = prime(p1+x);
    cout << min(p1*p2, p1*p1*p1) << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}