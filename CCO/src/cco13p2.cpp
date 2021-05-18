// 03/06/2021
// https://dmoj.ca/problem/cco13p2
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

int n, m, k; pii t[1<<21]; char op;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    n = 1<<n; k = n-1;
    for(int i=k+1;i<=k+n;i++) {
        cin >> t[i].F; t[i].S = i-k;
    }
    for(int i=k;i>=1;i--) t[i] = max(t[2*i], t[2*i+1]);
    for(int i=1,x,y;i<=m;i++) {
        cin >> op;
        if(op=='W') cout << t[1].S << "\n";
        else if(op=='S') {
            cin >> x; int cnt = 0;
            for(int i=(k+x)/2;i>=1;i/=2) {
                if(t[i].S==x) cnt++;
                else break;
            }
            cout << cnt << "\n";
        } else {
            cin >> x >> y; x+=k;
            t[x].F = y;
            for(int i=x/2;i>=1;i/=2) {
                t[i] = max(t[2*i], t[2*i+1]);
            }
        }
    }
}