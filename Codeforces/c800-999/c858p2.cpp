// 05/10/2021
// https://codeforces.com/contest/858/problem/B
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

int n, m, a, b, ans(-1);
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    int lo = 1, hi = n;
    REP(i, m) {
        cin >> a >> b;
        int na = a, nb = b;
        if(b==1) lo = max(lo, a);
        else {
            na+=na%nb;
            lo = max(lo, na/nb);
            na = a-1; nb = b-1;
            na-=na%nb;
            hi = min(hi, na/nb);
        }
    }
    int x = (n+lo-1)/lo, y = (n+hi-1)/hi;
    cout << (x==y? x:ans) << "\n";
}