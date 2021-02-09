// 02/07/2021
// https://codeforces.com/contest/1166/problem/A
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
const int mxn = 1e2+2;

int n, frq[26], a[26], b[26], ans; string s;
int fun(int x) {
    return (1+x-1)*(x-1)/2;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> s;
        frq[s[0]-'a']++;
    }
    REP(i, 26) {
        a[i] = frq[i]/2;
        b[i] = frq[i]-frq[i]/2;
        ans+=fun(a[i])+fun(b[i]);
    }
    cout << ans << endl;
}