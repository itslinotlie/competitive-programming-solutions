// 02/15/2021
// https://codeforces.com/contest/1487/problem/C
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}

int t(1), n;
void solve() {
    cin >> n;
    if(n%2==0) {
        for(int i=n-1;i>=1;i-=2) {
            cout << 0 << " ";
            int x = 0;
            for(int j=1;j<=i-1;j++) {
                cout << 1-2*x << " ";
                x = (x+1)%2;
            } x = (x+1)%2;
            for(int j=1;j<=i-1;j++) {
                cout << 1-2*x << " ";
                x = (x+1)%2;
            }
        }
    } else {
        int x = 0;
        for(int i=n-1;i>=1;i--) {
            for(int j=1;j<=i;j++) {
                cout << 1-2*x << " ";
                x = (x+1)%2;
            }
        } cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}