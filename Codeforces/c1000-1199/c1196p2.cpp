// 12/23/2020
// https://codeforces.com/contest/1196/problem/B
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
const int mxn = 2e5+5;

int t(1), n, k, a[mxn], b[mxn];
void solve() {
    cin >> n >> k; b[0] = 0;
    FOR(i, n) {
        cin >> a[i];
        a[i] = a[i]%2;
        b[i] = a[i]+b[i-1];
    }
    if(b[n]<k || (b[n]-k)%2!=0) {
        cout << "NO\n";
    }
    else { k--;
        cout << "YES\n";
        FOR(i, n) {
            if(k<0) break;
            if(a[i]%2==1 && --k>=0) {
                cout << i << " ";
            }
        } 
        cout << n << "\n";
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}