// 03/29/2021
// https://codeforces.com/contest/1506/problem/C
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

int t(1), n, m, ans; string a, b; bool flag;
void solve() {
    cin >> a >> b; ans = 0x3f3f3f3f; flag = true;
    if(a.size()>b.size()) swap(a, b);
    n = a.size(); m = b.size(); //a small, b >= a
    for(int i=n;i>=1 && flag;i--) { //length of string comparison
        for(int j=0;j<=n-i && flag;j++) {
            for(int k=0;k<=m-i;k++) {
                if(a.substr(j, i)==b.substr(k, i)) {
                    ans = min(ans, n-i+m-i);
                    flag = false;
                    break;
                }
            }
        }
    }
    cout << (ans==0x3f3f3f3f? n+m:ans) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}