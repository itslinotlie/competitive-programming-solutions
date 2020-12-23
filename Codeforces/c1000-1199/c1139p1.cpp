// 12/22/2020
// https://codeforces.com/contest/1139/problem/A
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
const int mxn = 6.5e4+4;

int n; string s; ll ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    REP(i, n) {
        if((s[i]-'0')%2==0) ans+=i+1;
    }
    cout << ans << endl;
}