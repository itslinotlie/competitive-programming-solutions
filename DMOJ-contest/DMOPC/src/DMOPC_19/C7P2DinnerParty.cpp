// 09/01/2020
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+5;

int n, a[mxn], b[mxn], ans[mxn], sum, cnt, mn = 0x3f3f3f3f, id; bool flag;
int main() {
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
        if(mn>a[i]) {mn = a[i]; id = i;}
    }
    if(sum%2) return 0 * puts("NO");
    for (int x=0;x<=a[id];x++) {
        cnt = x;
        memcpy(b, a, sizeof(a)); flag = true; memset(ans, 0, sizeof(ans));
        for (int i=0, j=id;i<n;i++, j=(j+1)%n) {
            b[j]-=cnt; b[(j+1)%n]-=cnt;
            if(b[j]<0 || b[(j+1)%n]<0) {flag = false; break;}
            ans[j] = cnt; cnt = b[(j+1)%n];
        }
        for (int i=0;i<n;i++) 
            if(b[i]) flag = false;
        if(flag) {
            printf("YES\n%d\n", sum/2);
            for (int i=0;i<n;i++) {
                while(ans[i]) {
                    cout << i << " " << (i+1)%n << "\n";
                    ans[i]--;
                }
            }
            return 0;
        }
    }
    puts("NO");
}