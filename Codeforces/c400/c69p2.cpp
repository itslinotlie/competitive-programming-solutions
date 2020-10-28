// 10/05/2020
// https://codeforces.com/contest/69/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 105;
typedef pair<int, int> pii;
#define INF 0x3f3f3f3f

int n, m, ans; pii mini[mxn];
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) mini[i].first = INF;
    for (int i=1,l,r,t,c;i<=m;i++) {
        cin >> l >> r >> t >> c;
        for (int j=l;j<=r;j++) {
            if(t<mini[j].first) {
                mini[j].first = t;
                mini[j].second = c;
            }
        }
    }
    for (int i=1;i<=n;i++) ans+=mini[i].second;
    cout << ans << endl;
}