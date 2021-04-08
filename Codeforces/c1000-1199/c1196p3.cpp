// 12/23/2020
// https://codeforces.com/contest/1196/problem/C
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
const int mxn = 1e5+5, MM = 1e9;

int t(1), n, r, c, pt[4]; pii a[mxn]; bool canMove[mxn][4];
void fun (int j, int i) {
    if(j==0) pt[j] = min(pt[j], a[i].F);
    if(j==1) pt[j] = max(pt[j], a[i].S);
    if(j==2) pt[j] = max(pt[j], a[i].F);
    if(j==3) pt[j] = min(pt[j], a[i].S);    
}
void fun2 (int j, int i) {
    if(j==0) pt[j] = max(pt[j], a[i].F);
    if(j==1) pt[j] = min(pt[j], a[i].S);
    if(j==2) pt[j] = min(pt[j], a[i].F);
    if(j==3) pt[j] = max(pt[j], a[i].S);    
}
void solve() { //pt[4] = {left, up, right, down}
    cin >> n;
    pt[0] = pt[3] = MM;
    pt[1] = pt[2] = -MM;
    FOR(i, n) {
        cin >> r >> c;
        a[i] = {r, c};
        for(auto &x:canMove[i]) cin >> x;
        REP(j, 4) fun(j, i);
    }
    FOR(i, n) {
        for(int j=0;j<4;j++) {
            if(!canMove[i][j]) fun2(j, i);
        }
    }
    if(pt[0]<=pt[2] && pt[1]>=pt[3]) {
        cout << 1 << " " << pt[0] << " " << pt[1] << endl;
    } else cout << "0\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}