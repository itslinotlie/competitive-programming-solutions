// 08/15/2020
// https://dmoj.ca/problem/btoi18p2
#include<bits/stdc++.h>
using namespace std;
const int MM = 2e5 + 5;

int n, k, r, xpt[MM], a[MM], frq[MM], tot, ans = 0x3f3f3f3f;
int main() {
    scanf("%d%d%d", &n, &k, &r); tot = r;
    for (int i=1;i<=n;i++) scanf("%d", &a[i]);
    for (int i=1, x, y;i<=r;i++) {
        scanf("%d%d", &x, &y); xpt[x] = y;
    }
    for (int l=1, r=1;r<=n;r++) {
        if(++frq[a[r]]==xpt[a[r]]) tot--;
        while(l<=r && frq[a[l]] > xpt[a[l]]) {frq[a[l]]--; l++;}
        if(tot==0) ans = min(ans, r-l+1);
    }
    ans==0x3f3f3f3f? cout<<"impossible":cout<<ans; cout<<"\n";
}