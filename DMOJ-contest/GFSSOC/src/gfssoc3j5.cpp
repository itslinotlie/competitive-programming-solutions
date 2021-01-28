// 09/27/2020
// https://dmoj.ca/problem/gfssoc3j5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 7;
typedef pair<int, int> pii;

int n, ans=0x3f3f3f3f; pii a[mxn]; bool vis[mxn];
int main() {
    cin >> n; int k[n];
    for (int i=0, x, y;i<n;i++) {
        cin >> x >> y;
        a[i] = {x, y};
        k[i] = i;
    }
    do {
        memset(vis, false, sizeof(vis));
        int sum = 0, prev = 101;
        for (int i=0;i<n;i++) {
            int id = k[i], len = 0, w = 0;
            for (int j=0;j<n;j++) {
                if(!vis[j]) w+=a[j].second;
            }
            len = abs(prev-a[id].first);
            sum+=(len+1)*w;
            vis[id] = true;
            prev = a[id].first;
        }
        ans = min(ans, sum);
    } while(next_permutation(k, k+n));
    cout << ans << "\n";
}