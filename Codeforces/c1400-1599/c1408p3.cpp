// 02/07/2021
// https://codeforces.com/contest/1408/problem/C
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
const int mxn = 1e5+5;

int t(1), n, l, a[mxn];
bool fun(double x) {
    double f = 0, s = 0, time = x;
    for(int i=1;i<=n+1;i++) {
        double dis = a[i] - a[i-1];
        if(dis<i*time) {
            f+=dis; time-=dis/i;
        } else {
            f+=i*time; break;
        }
    } time = x;
    for(int i=n;i>=0;i--) {
        double dis = a[i+1] - a[i];
        double speed = n-i+1;
        if(dis<speed*time) {
            s+=dis; time-=dis/speed;
        } else {
            s+=speed*time; break;
        }
    }
    return f+s<=l;
}
void solve() {
    cin >> n >> l; CLR(a);
    FOR(i, n) cin >> a[i]; a[n+1] = l;
    double lo = 0, hi = 1e9, eps = 1e-7;
    while(lo+eps<hi) {
        double mid = (lo+hi)/2.0;
        if(fun(mid)) lo = mid;
        else hi = mid;
    }
    cout << setprecision(6) << fixed << lo << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}