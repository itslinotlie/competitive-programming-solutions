// 05/16/2021
// https://codeforces.com/contest/328/problem/B
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

int n, m; string a, b; vector<int> va(10), vb(10);
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b; n = a.size(); m = b.size();
    REP(i, n) va[a[i]-'0']++;
    va[2]+=va[5]; va[6]+=va[9];
    REP(i, m) vb[b[i]-'0']++;
    vb[2]+=vb[5]; vb[6]+=vb[9];
    int ans = 0x3f3f3f3f;
    for(int i=0;i<=9;i++) {
        if(i==5 || i==9) continue;
        if(va[i]) ans = min(ans, vb[i]/va[i]);
    }
    cout << (ans==0x3f3f3f3f? 0:ans) << "\n";
}