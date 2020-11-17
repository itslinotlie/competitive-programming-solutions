// 11/02/2020
// https://codeforces.com/contest/218/problem/B
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
const int mxn = 1e3+5;

int n, m, a[mxn], x, y, c, d; bool flag;
int main() {
    cin >> n >> m; c = d = n;
    FOR(i, m) cin >> a[i];
    sort(a+1, a+1+m);
    FOR(i, m) {
        for (int j=a[i];j>=1;j--) {
            x+=j; c--;
            if(c==0) {flag = true; break;}
        }
        if(flag) break;
    } flag = false;
    while(d>0) {
        y+=a[m]; a[m]--; d--;
        if(d==0) break;
        sort(a+1, a+1+m);
    }
    cout << y << " " << x << endl;
}