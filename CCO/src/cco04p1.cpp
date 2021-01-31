// 01/31/2021
// https://dmoj.ca/problem/cco04p1
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

int n, m, x, ans, frq[26]; pii a[26]; char c; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) { //score, freq
        cin >> s; x = s[0]-'a';
        cin >> a[x].F >> a[x].S;
    }
    cin >> m;
    FOR(i, m) {
        cin >> s; CLR(frq); x = 0;
        REP(j, s.size()) frq[s[j]-'a']++;
        bool flag = false;
        REP(j, 26) {
            if(frq[j]>a[j].S) flag = true;
        }
        if(flag) continue;
        REP(j, 26) {
            x+=frq[j]*a[j].F;
        }
        ans = max(ans, x);
    }
    cout << ans << endl;
}