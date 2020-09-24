// 07/05/2020
// https://dmoj.ca/problem/ccc09s5
#include<bits/stdc++.h>
using namespace std;

int r, c, k;
int x, y, r0, b;
int psa[30002][1002];
int main() {
    scanf("%d%d%d", &r, &c, &k);
    for (int T=1;T<=k;T++) {
        cin >> x >> y >> r0 >> b;
        int hi = min(y+r0, r), lo = max(y-r0, 1);
        for (int i=hi;i>=lo;i--) {
            int dis = abs(i-y); int wid = sqrt(r0*r0-dis*dis);
            int lft = max(x-wid, 1), rit = min(x+wid, c);
            psa[i][lft]+=b; psa[i][rit+1]-=b;
        }
    }
    int MX = 0, cnt = 0;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            psa[i][j]+=psa[i][j-1];
            if (psa[i][j]>MX) {
                MX = psa[i][j];
                cnt = 1;
            }
            else if (psa[i][j]==MX) {
                cnt++;
            }
        }
    }
    printf("%d\n%d\n", MX, cnt);
}