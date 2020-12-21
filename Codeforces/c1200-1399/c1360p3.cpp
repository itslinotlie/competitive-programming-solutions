// 12/20/2020
// https://codeforces.com/contest/1360/problem/C
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
const int mxn = 55;

int t, n, a[mxn], e, o;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n; CLR(a); e = o = 0;
        FOR(i, n) {
            cin >> a[i];
            if(a[i]%2) o++;
            else e++;
        }
        if(o%2==0 && e%2==0) {
            cout << "YES\n"; continue;
        }
        sort(a+1, a+n+1);
        int b = 1;
        for (int i=2;i<=n;i++) {
            if(abs(a[i]-a[i-1])==1) {
                e--; o--; i++;
            }
            if(e%2==0 && o%2==0 && (e!=0 || o!=0 ||(e==0 && o==0))) {
                b = 0;
                cout << "YES\n"; break;
            }
        }
        if(b) cout << "NO\n";

    }
}