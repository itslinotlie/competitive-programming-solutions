// 05/21/2021
// https://codeforces.com/contest/1208/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 2e3+3;

int n, a[mxn], ans; map<int, int> frq;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; ans = n-1;
    REP(i, n) cin >> a[i];
    REP(i, n) {
        frq.clear();
        bool flag = true;
        REP(j, i) {
            frq[a[j]]++;
            if(frq[a[j]]>=2) {
                flag = false; break;
            }
        }
        int idx = n;
        for(int j=n-1;j>=i;j--) {
            frq[a[j]]++;
            if(frq[a[j]]==1) idx = j;
            else break;
        }
        if(flag) ans = min(ans, idx-i);
    }
    cout << ans << "\n";
}