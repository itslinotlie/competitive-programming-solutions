// 05/16/2021
// https://codeforces.com/contest/875/problem/B
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
const int mxn = 3e5+5;

int n, x, r, cnt; vector<int> vec; bool vis[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; vec.push_back(1); r = n;
    FOR(i, n) {
        cin >> x; vis[x] = true; cnt++;
        while(r && vis[r]) {
            r--; cnt--;
        }
        vec.push_back(cnt+1);
    }
    for(auto x:vec) cout << x << " "; cout << "\n";
}