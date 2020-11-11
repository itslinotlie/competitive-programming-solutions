// 11/10/2020
// https://codeforces.com/contest/975/problem/B
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
const int n = 14;

ll x, idx, a[n+1], b[n+1], sum, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    FOR(i, n) cin >> a[i];
    FOR(i, n) { sum = 0;
        FOR(j, n) b[j] = a[j];
        x = b[i]; b[i] = 0;
        FOR(j, n) b[j]+=x/14;
        x%=14; idx = i+1;
        while(x--) {
            if(idx==15) idx = 1;
            b[idx++]++;
        }
        FOR(j, n) {
            if(b[j]%2==0) sum+=b[j];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}