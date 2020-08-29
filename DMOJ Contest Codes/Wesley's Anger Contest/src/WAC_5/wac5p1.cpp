// 08/09/2020
// https://dmoj.ca/problem/wac5p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3 + 5;

int n, a[mxn], prv, ans; bool vis[mxn], tmp;
bool visit() {
    for (int i=1;i<=n;i++) {
        if(!vis[i]) return false;
    } return true;
}
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) scanf("%d", &a[i]);
    sort(a+1, a+1+n);
    memset(vis, false, sizeof(vis));
    while(!visit()) {
        tmp = true;
        for (int i=1;i<=n;i++) {
            if(!vis[i] && tmp) {
                prv = a[i];
                vis[i] = true;
                tmp = false;
            } else {
                if(a[i]>prv && !vis[i]) {
                    prv = a[i];
                    vis[i] = true;
                }
            }
        }
        ans+=prv;
    }
    cout << ans << endl;
}