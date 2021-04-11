// 04/10/2021
// https://codeforces.com/contest/1512/problem/D
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

int t(1), n; ll a[mxn], sum;
void solve() {
    cin >> n; sum = 0; CLR(a);
    FOR(i, n+2) {
        cin >> a[i];
        sum+=a[i];
    } sort(a+1, a+1+n+2);
    FOR(i, n+2) {
        ll x = sum-a[i];
        if(x%2) continue;
        auto it = lower_bound(a+1, a+1+n+2, x/2);
        if(*it!=x/2) continue;
        if(*it==a[i] && a[i-1]!=a[i] && a[i]!=a[i+1]) continue;
        bool flag = true;
        FOR(j, n+2) {
            if(i==j) continue;
            if(a[j]==*it && flag) {flag = false; continue;}
            cout << a[j] << " ";
        } cout << "\n";
        return;
    }
    cout << "-1" << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}