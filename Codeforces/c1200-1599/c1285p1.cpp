// 10/15/2020
// https://codeforces.com/contest/1285/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)

int n, l, r; string s;
int main() {
    cin >> n >> s;
    for (int i=0;i<s.size();i++) {
        if(s[i]=='L') l++;
        else r++;
    }
    cout << l+r+1 << endl;
}