// 02/10/2021
// https://codeforces.com/contest/1293/problem/A
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


int t(1), n, s, k; set<int> sett; vector<int> vec;
void solve() {
    cin >> n >> s >> k; 
    vec.resize(k); sett.clear();
    for(auto &x:vec) {
        cin >> x;
        sett.insert(x);
    }
    for(int i=0;i<=k;i++) {
        if(s-i>=1 && sett.find(s-i)==sett.end()) {cout << i << endl; return;}
        if(s+i<=n && sett.find(s+i)==sett.end()) {cout << i << endl; return;}
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}