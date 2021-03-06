// 02/22/2021
// https://cses.fi/problemset/task/1092
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
const int mxn = 1e6+6;

int n; bool vis[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    if(n<=2 || (1LL*n*(n+1)/2)%2) cout << "NO\n";
    else {
        cout << "YES\n";
        ll target = 1LL*n*(n+1)/4, cnt = 0;
        for(int i=n;i>=1;i--) {
            if(target-i>=0) {
                target-=i; vis[i] = true;
                cnt++;
            }
        }
        cout << cnt << "\n";
        for(int i=1;i<=n;i++) {
            if(vis[i]) cout << i << " ";
        } cout << "\n";
        cout << n-cnt << "\n";
        for(int i=1;i<=n;i++) {
            if(!vis[i]) cout << i << " ";
        } cout << "\n";
    }
}