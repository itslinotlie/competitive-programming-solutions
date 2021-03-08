// 03/06/2021
// https://codeforces.com/contest/131/problem/E
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

int n, m, r, c, ans[10]; set<int> row[mxn], col[mxn], dplus[mxn], dneg[mxn]; pii arr[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, m) {
        cin >> r >> c;
        row[r].insert(c);
        col[c].insert(r);
        dplus[r+c].insert(r);
        dneg[r-c+mxn/2].insert(r);
        arr[i] = {r, c};
    }
    FOR(i, m) {
        int x = arr[i].F, y = arr[i].S, cnt = 0;

        auto p = row[x].lower_bound(y);
        if(p!=row[x].begin()) cnt++;
        if(++p!=row[x].end()) cnt++;

        p = col[y].lower_bound(x);
        if(p!=col[y].begin()) cnt++;
        if(++p!=col[y].end()) cnt++;

        p = dplus[x+y].lower_bound(x);
        if(p!=dplus[x+y].begin()) cnt++;
        if(++p!=dplus[x+y].end()) cnt++;

        p = dneg[x-y+mxn/2].lower_bound(x);
        if(p!=dneg[x-y+mxn/2].begin()) cnt++;
        if(++p!=dneg[x-y+mxn/2].end()) cnt++;
        
        ans[cnt]++;
    }
    REP(i, 9) cout << ans[i] << " "; cout << endl;
}