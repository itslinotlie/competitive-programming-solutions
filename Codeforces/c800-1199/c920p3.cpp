// 11/09/2020
// https://codeforces.com/contest/920/problem/C
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
const int mxn = 2e5+5;

int n, a[mxn], p[mxn]; string s;
int find(int x) {
    return p[x]==x? p[x]:p[x]=find(p[x]);
}
void unite(int x, int y) {
    x = find(x); y = find(y);
    if(x!=y) p[x] = y;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i], p[i] = i;
    cin >> s;
    REP(i, n-1) {
        if(s[i]=='1') unite(i+1, i+2); 
    }
    FOR(i, n) {
        if(find(i)!=find(a[i])) return 0 * puts("NO");
    } puts("YES");
}