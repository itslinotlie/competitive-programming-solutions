// 11/22/2020
// https://codeforces.com/contest/1451/problem/D
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


ll t(1), d, k, x, y;
void solve() {
    cin >> d >> k; x = y = 0;
    while(true) {
        if(x<y && (x+k)*(x+k)+y*y<=d*d) x+=k;
        else if(x*x+(y+k)*(y+k)<=d*d) y+=k;
        else break;
    }
    cout << (x!=y? "Ashish":"Utkarsh") << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}