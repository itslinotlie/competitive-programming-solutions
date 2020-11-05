// 10/17/2020
// https://codeforces.com/contest/1428/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 3e5+5;

int t, n, dp[mxn], dash, b1, b2; string s;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> s; dash = 0; b1 = b2 = 1;
        for (int i=1;i<s.size();i++) {
            if(s[i]=='-') dash+=2;
            if(s[i]=='-' && s[i-1]=='-') dash--;
            if(s[i]=='<') b2 = 0;
            if(s[i]=='>') b1 = 0;
        }
        if(s[0]=='-') dash+=2;
        if(s[0]=='<') b2 = 0;
        if(s[0]=='>') b1 = 0;
        if(s[s.size()-1]==s[0] && s[0]=='-') dash--;
        if(b1 || b2) cout << n << endl;
        else cout << max(0, dash) << endl;
    }
}