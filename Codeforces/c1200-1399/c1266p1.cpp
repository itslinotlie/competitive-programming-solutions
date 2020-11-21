// 11/17/2020
// https://codeforces.com/contest/1266/problem/A
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


int t, even, sum, zero; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> s; even = sum = zero = 0;
        REP(i, s.size()) {
            sum+=s[i]-'0';
            even += ((s[i]-'0')%2==0);
            zero = zero || s[i]=='0';
        }
        if(sum%3==0 && even>=2 && zero) cout << "red\n";
        else cout << "cyan\n";
    }
}