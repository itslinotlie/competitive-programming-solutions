// 11/14/2020
// https://codeforces.com/contest/845/problem/C
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
const int MM = 1e9+5;

int n, a, b; vector<pii> vec; ll cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> a >> b;
        vec.push_back({a, 1});
        vec.push_back({b+1, -1});
    } vec.push_back({1, 0}); vec.push_back({MM, 0});
    sort(all(vec));
    for(auto x:vec) {
        cnt+=x.S;
        if(cnt>2) return 0 * puts("NO");
    } puts("YES");
}