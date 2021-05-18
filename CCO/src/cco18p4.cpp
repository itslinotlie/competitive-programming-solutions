// 02/27/2021
// https://dmoj.ca/problem/cco18p4
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

int r, c, k; map<pii, int> mp;
int query(int r, int c) {
    if(mp.count({r, c})) return mp[{r, c}];
    cout << "? " << r << " " << c << endl;
    int val; cin >> val; 
    return mp[{r, c}] = val;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> r >> c >> k;
    int r1 = 1, r2 = r, c1 = 1, c2 = c;
    while(r1<r2 || c1<c2) {
        int rm = (r1+r2)/2, cm = (c1+c2)/2;
        if(r1<r2) {
            int cen = query(rm, cm), below = query(rm+1, cm);
            if(cen<below) r2 = rm;
            else r1 = rm+1;
        }
        if(c1<c2) {
            int cen = query(rm, cm), rit = query(rm, cm+1);
            if(cen<rit) c2 = cm;
            else c1 = cm+1;
        }
    }
    int tmp = query(r1, c1);
    cout << "! " << tmp << endl;
}