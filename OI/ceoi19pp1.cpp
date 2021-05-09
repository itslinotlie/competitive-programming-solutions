// 06/23/2020
// https://dmoj.ca/problem/ceoi19pp1
#include <bits/stdc++.h>
using namespace std;

int h, v, y[1502], x[1502], ans;
unordered_map<int, int> k;
int main() {
    scanf("%d%d", &h, &v);
    for (int i=1;i<=h;i++) {
        scanf("%d", &y[i]);
        for (int j=1;j<i;j++) {
            k[y[i]-y[j]]++;
        }
    }
    for (int i=1;i<=v;i++) {
        scanf("%d", &x[i]);
        for (int j=1;j<i;j++) {
            ans += k[x[i]-x[j]];
        }
    }
    printf("%d\n", ans);
}