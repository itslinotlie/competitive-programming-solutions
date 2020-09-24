// 06/23/2020
// https://dmoj.ca/problem/cactus
#include<bits/stdc++.h>
using namespace std;

int k, m, psa[200003]; double n;
pair<int, int> arr[6];
int main() {
    scanf("%lf%d%d", &n, &m, &k);
    for (int i=1,a,b;i<=k;i++) {
        scanf("%d%d", &a, &b);
        arr[i] = make_pair(a, b);
    }
    for (int i=1,s,d,x;i<=m;i++) {
        scanf("%d%d%d", &s, &d, &x);
        psa[s]+=x; psa[s+d]-=x;
    }
    for (int i=0;i<=100001;i++) {
        if (i!=0) psa[i]+=psa[i-1];
        double x = psa[i];
        for (int j=1;j<=k;j++) {
            x = min(x, (double)(psa[i]-arr[j].first)*(100-arr[j].second)/100);
        }
        n-= max(x, 0.0);
    }
    n>0? printf("%.2f\n", n):printf("Act Like A Cactus.\n");
}