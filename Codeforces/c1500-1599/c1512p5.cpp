// 04/11/2021
// https://codeforces.com/contest/1512/problem/E
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
const int mxn = 5e2+2;

int t(1), n, l, r, sum, dif, s; bool vis[mxn];
void solve() {
    cin >> n >> l >> r >> s; CLR(vis);
    dif = r-l+1; sum = 0;
    int lo = (1+dif)*dif/2, hi = (n+n-dif+1)*dif/2;
    if(s<lo || hi<s) {cout << "-1\n"; return;}
    priority_queue<int, vector<int>, greater<>> pq;
    for(int i=n;i>=n-dif+1;i--) {pq.push(i); vis[i] = 1; sum+=i;}
    while(sum>s && !pq.empty()) {
        int u = pq.top(); pq.pop();
        if(u!=1 && !vis[u-1]) {
            sum--; 
            pq.push(u-1); vis[u] = 0; vis[u-1] = 1;
        }
    }
    vector<int> chosen, filler;
    FOR(i, n) {
        if(vis[i]) chosen.push_back(i);
        else filler.push_back(i);
    }
    FOR(i, n) {
        if(l<=i && i<=r) {
            cout << chosen.back() << " "; chosen.pop_back();
        } else {
            cout << filler.back() << " "; filler.pop_back();
        }
    } cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}