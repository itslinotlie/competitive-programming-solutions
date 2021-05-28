// 03/06/2021
// https://dmoj.ca/problem/wc15fs2
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
const int mxn = 1e6+6;

int n, m, k, cow[mxn], t[mxn];
bool check(int lmt) {
    int cnt = 0;
    for(int i=1,j=1;j<=m;j++) {
        while(i<=n && t[j]<=cow[i] && t[j]>=cow[i]-k && cnt<lmt) {
            i++; cnt++;
        }
        cnt = 0;
        if(i>n) return true;
    } return false;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    FOR(i, n) cin >> cow[i];
    FOR(i, m) cin >> t[i];
    sort(cow+1, cow+1+n);
    sort(t+1, t+1+m);
    int lo = 1, hi = n, ans = n+1;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(check(mid)) {ans = mid; hi = mid-1;}
        else lo = mid+1;
    }
    cout << (ans>n? -1:ans)  << endl;
}