// 08/15/2020
// https://dmoj.ca/problem/ecoo18r2p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6 + 5;
typedef pair<int, double> pii;

int n, d, p[mxn], mx; double w, ans; pii arr[mxn];
bool cmp(pii x, pii y) {return x.second > y.second;}
int find(int x) {return p[x]==x? x:p[x]=find(p[x]);}
int main() {
    for (int T=1;T<=10;T++) {
        scanf("%d", &n); mx = 0; ans = 0;
        memset(p, 0, sizeof(p));
        for (int i=0;i<n;i++) {
            scanf("%d%lf", &d, &w); mx = max(mx, d);
            arr[i] = {d, w};
        }
        sort(arr, arr+n, cmp);
        for (int i=0;i<=mx;i++) p[i] = i;
        for (int i=0;i<n;i++) {
            int id = find(arr[i].first);
            if(id) {p[id]=id-1; ans+=arr[i].second;}
        }
        printf("%.4f\n", ans);
    }
}