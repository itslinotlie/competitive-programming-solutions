// 11/02/2020
// https://dmoj.ca/problem/bgoi09p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, a[mxn], p[mxn], ans; set<int> sett;
int find(int u) {
    return u==p[u]? p[u]:p[u]=find(p[u]);
}
int main() {
    for (int t=1;t<=2;t++) {
        cin >> n; sett.clear(); ans = n;
        for (int i=1;i<=n;i++) p[i] = i;
        for (int i=1, x;i<=n;i++) {
            cin >> x;
            int u = find(i), v = find(x);
            if(u!=v) p[u] = v, ans--;
        }
        cout << ans << " ";
    } cout << endl;
}