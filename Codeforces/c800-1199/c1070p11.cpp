// 10/28/2020
// https://codeforces.com/contest/1070/problem/K
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
const int mxn = 1e5+5;

int n, k, b, idx(1); ll a[mxn], x, cnt; string s;
int main() {
    cin >> n >> k;
    FOR(i, n) cin >> a[i], a[i]+=a[i-1];
    if(a[n]%k) return 0 * puts("No");
    FOR(i, k) {
        x = 0; cnt = 0;
        while(idx<=n && x<a[n]/k) {
            x+=a[idx]-a[idx-1];
            cnt++; idx++;
        }
        if(x!=a[n]/k) {b = 1; break;}
        s+=to_string(cnt)+" ";
    }
    if(b) puts("No");
    else puts("Yes"), cout << s << endl;
}