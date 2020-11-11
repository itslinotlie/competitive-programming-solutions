// 11/11/2020
// https://codeforces.com/contest/1370/problem/B
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
const int mxn = 1e3+5;

int t, n, a[2*mxn]; vector<int> e, o; vector<pii> ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n; CLR(a);
        e.clear(); o.clear(); ans.clear();
        for (int i=1;i<=2*n;i++) {
            cin >> a[i];
            if(a[i]%2) o.push_back(i);
            else e.push_back(i);
        }
        for (int i=0;i+1<o.size();i+=2) ans.push_back({o[i], o[i+1]});
        for (int i=0;i+1<e.size();i+=2) ans.push_back({e[i], e[i+1]});
        for (int i=0;i<n-1;i++) cout << ans[i].F << " " << ans[i].S << "\n";
    }
}