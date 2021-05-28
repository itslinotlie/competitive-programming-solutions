// 09/22/2020
// https://dmoj.ca/problem/wc17c1s1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 8+5;

int a, b, c[mxn], d[mxn], x, y;
int main() {
    scanf("%d%d", &a, &b);
    c[0] = d[0] = 0x3f3f3f3f;
    for (int i=0;i<a;i++) scanf("%d", &c[i]);
    for (int i=0;i<b;i++) scanf("%d", &d[i]);
    sort(c, c+a);
    sort(d, d+b);
    for (int t=1;t>=0;t--) {
        int k = (t?d[0]:c[0]);
        for (int i=0;i<(t?a:b);i++) {
            if((t?c[i]:d[i])<k) t? x++:y++;
        }
    }
    printf("%d %d\n", x, y);
}