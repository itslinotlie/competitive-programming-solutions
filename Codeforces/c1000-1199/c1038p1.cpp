// 12/22/2020
// https://codeforces.com/contest/1038/problem/A
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


int n, k, frq[26]; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> s;
    REP(i, n) {
        frq[s[i]-'A']++;
    }
    int mn = 0x3f3f3f3f;
    REP(i, k) {
        mn = min(mn, frq[i]);
    }
    cout << mn*k << endl;
}