// 11/14/2020
// https://codeforces.com/contest/274/problem/A
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
const int mxn = 1e5+5;

int n, k, a[mxn]; set<int> sett;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    FOR(i, n) cin >> a[i];
    sort(a+1, a+1+n);
    FOR(i, n) {
        if(a[i]%k) sett.insert(a[i]);
        else if(sett.find(a[i]/k)==sett.end()) sett.insert(a[i]);
    }
    cout << sett.size() << "\n";
}