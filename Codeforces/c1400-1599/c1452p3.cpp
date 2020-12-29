// 11/19/2020
// https://codeforces.com/contest/1452/problem/C
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


int t, ans; string s;
bool open(char c) {
    return c=='(' || c=='[';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> s; ans = 0;
        stack<int> r1, r2, e1, e2;
        REP(i, s.size()) {
            if(!open(s[i])) {
                if(s[i]==')' && !r2.empty()) ans++, r2.pop();
                else if(s[i]==')') r1.push(1);
                if(s[i]==']' && !e2.empty()) ans++, e2.pop();
                else if(s[i]==']') e1.push(1);
            } else {
                if(s[i]=='(') r2.push(1);
                else e2.push(1);
            }
        }
        cout << ans << endl;
    }
}