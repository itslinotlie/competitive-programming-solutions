// 10/17/2020
// // https://codeforces.com/contest/1428/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int t, ans; string s; 
int main() {
    cin >> t;
    while(t--) {
        cin >> s; ans = 0; stack<char> stk;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='B' && !stk.empty()) stk.pop();
            else stk.push(s[i]);
        }
        cout << stk.size() << endl;
    }
}