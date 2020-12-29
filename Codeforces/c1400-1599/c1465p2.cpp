// 12/22/2020
// https://codeforces.com/contest/1465/problem/B
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


int t(1); string s; ll x;
bool fair() {
    s = to_string(x);
    for(int i=0;i<s.size();i++) {
        int digit = s[i]-'0';
        if(digit==0) continue;
        if(x%digit!=0) return false;
    } return true;
}
void solve() {
    cin >> x;
    while(!fair()) x++;
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}