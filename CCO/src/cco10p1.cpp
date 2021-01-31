// 09/24/2020
// https://dmoj.ca/problem/cco10p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int d, f, t, w[mxn], a[mxn], cnt[mxn]; vector<int> adj[mxn];
int main() {
    cin >> d;
    for (int i=1;i<=d;i++) cin >> w[i];
    cin >> f;
    for (int i=1,u,v;i<=f;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    cin >> t;
    memset(a, -1, sizeof(a)); a[1] = 1;
    for (int i=0;i<=t;i++) {
        for (int j=1;j<=d;j++) a[j]--;
        for (int j=1;j<=d;j++) {
            if(!a[j]) {
                cnt[j]++;
                for (auto x:adj[j]) {
                    if(a[x]<0) a[x] = w[x];
                }
            }
        }
    }
    for (int i=1;i<=d;i++) cout << cnt[i] << "\n";
}