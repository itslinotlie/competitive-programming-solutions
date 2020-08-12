// 07/11/2020
// https://dmoj.ca/problem/dmopc16c2p2
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5;

int n, m, k, x;
int parent[mx+2], rankk[mx+2];
int find(int xx) {
    if(parent[xx]!=xx) parent[xx] = find(parent[xx]);
    return parent[xx];
}
void uni(int a, int b) {
    int rx = find(a), ry = find(b);
    if(rx==ry) return;
    if(rx>ry) parent[ry]=rx;
    else if(ry>rx) parent[rx]=ry;
    else {
        parent[ry] = rx;
        rankk[rx]++;
    }
}
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) parent[i] = i;
    for (int T=1;T<=m;T++) {
        cin >> k;
        for (int j=1, tmp;j<=k;j++) {
            cin >> tmp;
            if (j==1) x = tmp;
            uni(x, tmp);
        }
    }
    string ans = "";
    int rk = find(1), cnt = 0;
    for (int i=1;i<=n;i++) {
        if(rk==find(i)) {
            ans+=to_string(i)+" ";
            cnt++;
        }
    }
    cout << cnt << endl;
    cout << ans << endl;
}