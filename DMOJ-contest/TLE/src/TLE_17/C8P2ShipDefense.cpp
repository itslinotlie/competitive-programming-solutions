// 07/02/2020
// https://dmoj.ca/problem/tle17c8p2
#include<bits/stdc++.h>
using namespace std;

int d, e, psa[1004]; double n;
pair<int, int> arr[6];
int main() {
    scanf("%lf%d%d", &n, &d, &e);
    for (int i=1,a,b;i<=d;i++) {
        scanf("%d%d", &a, &b);
        arr[i] = make_pair(b, a);
    }
    for (int i=1,s,d,x;i<=e;i++) {
        scanf("%d%d%d", &s, &d, &x);
        psa[s]+=x; psa[s+d]-=x;
    }
    for (int i=1;i<=1002;i++) psa[i]+=psa[i-1];
    for (int i=0;i<=1002;i++) {
        if (psa[i]==0) continue;
        double x = psa[i];
        for (int j=1;j<=d;j++) {
            x = min(x, (double)(psa[i]-arr[j].first)*(100-arr[j].second)/100);
        }
        n-= max(x, 0.0);
    }
    n>0.0? printf("%.2f\n", n):printf("DO A BARREL ROLL!\n");
}