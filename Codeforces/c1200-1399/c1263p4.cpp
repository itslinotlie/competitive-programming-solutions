// 12/20/2020
// https://codeforces.com/contest/1263/problem/D
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

int n, p[26]; string s[mxn]; set<int> letter, sett;
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
    REP(i, 26) p[i] = i;
    FOR(i, n) {
        cin >> s[i];
        letter.insert(s[i][0]);
        for (int j=1;j<s[i].size();j++) {
            letter.insert(s[i][j]);
            unite(s[i][j-1]-'a', s[i][j]-'a');
        }
    }
    REP(i, 26) {
        unite(find(i), i);
    }
    for(auto x:letter) {
        sett.insert(p[x-'a']);
    }
    cout << sett.size() << endl;
}