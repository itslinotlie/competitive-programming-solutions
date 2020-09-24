// 07/06/2020
// https://dmoj.ca/problem/coci06c2p5
#include<bits/stdc++.h>
using namespace std;

int r, c, psa[402][402], ans = 0;
string x;
int main() {
    cin >> r >> c; getline(cin, x);
    for (int i=1;i<=r;i++) {
        getline(cin, x);
        for (int j=1;j<=c;j++) {
            if(x[j-1]=='X') psa[i][j]++;
        }
    }
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            psa[i][j]+=psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1];
        }
    }
    for (int r1=1;r1<=r;r1++) {
        for (int r2=r1;r2<=r;r2++) {
            int c1 = 1, c2 = 1;
            for (;c2<=c;c2++) {
                int sum = psa[r2][c2] - psa[r2][c1-1] - psa[r1-1][c2] + psa[r1-1][c1-1];
                if (sum==0) ans = max(ans, 2*(r2-r1+1) + 2*(c2-c1+1) - 1);
                else c1 = c2+1;
            }
        }
    }
    cout << ans << endl;
}