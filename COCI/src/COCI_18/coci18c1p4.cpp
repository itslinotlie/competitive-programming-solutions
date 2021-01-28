// 08/10/2020
// https://dmoj.ca/problem/coci18c1p4
#include<bits/stdc++.h>
using namespace std;
const int MM = 2e3+5;

int r, c, h[MM], stk[MM], top; string x; long long ans;
long long calc(int x) {
    return 1LL*x*(x+1)/2;
}
int main() {
    scanf("%d%d", &r, &c); getline(cin, x);
    for (int i=1;i<=r;i++) {
        //Instead of doing stack.empty(), its top (0 = false, so anything > 0 is !empty()) --> Big Brain 0.o
        getline(cin, x); top = 0;
        for (int j=1;j<=c+1;j++) {
            x[j-1]=='.'? h[j]++:h[j]=0;
            // extended version of largest area in histogram (increasing stack)
            while(top && h[j] < h[stk[top]]) {
                int idx = stk[top--], rit = j-idx, lft = idx-(top>0? stk[top]:0);
                ans += calc(h[idx])*(calc(rit)*lft + calc(lft)*rit - lft*rit);
            }
            stk[++top] = j;
        }
    }
    printf("%lld\n", ans);
}