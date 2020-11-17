// 11/12/2020
// https://codeforces.com/contest/977/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
const int mxn = 105;

int n; pii a[mxn];
int fun(ll x) {
    int sum = 0;
    while(x%3==0) sum++, x/=3;
    return sum;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> a[i].S;
        a[i].F-=fun(a[i].S);
    } sort(a+1, a+1+n);
    FOR(i, n) cout << a[i].S << " "; cout << endl;
}