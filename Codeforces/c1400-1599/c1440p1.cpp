// 11/17/2020
// https://codeforces.com/contest/1440/problem/A
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


int t, n, c1, c2, h, zero, one, ans; string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> c1 >> c2 >> h >> s;
        zero = one = ans = 0;
        REP(i, n) {
            if(s[i]=='0') zero++;
            else one++;
        }
        if(h+c1<c2) ans+=one*h, zero+=one, one = 0;
        if(h+c2<c1) ans+=zero*h, one+=zero, zero = 0;
        ans+=c1*zero + c2*one;
        cout << ans << endl;
    }
}