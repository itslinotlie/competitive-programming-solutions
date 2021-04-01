// 10/20/2020
// https://codeforces.com/contest/1433/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int t, x, cnt;
int main() {
    cin >> t;
    while(t--) {
        cin >> x; cnt = 0;
        for(int i=1;i<to_string(x)[0]-'0';i++) {
            cnt+=10;
        }
        for(int i=1;i<=to_string(x).length();i++) cnt+=i;
        cout << cnt << endl;
    }
}