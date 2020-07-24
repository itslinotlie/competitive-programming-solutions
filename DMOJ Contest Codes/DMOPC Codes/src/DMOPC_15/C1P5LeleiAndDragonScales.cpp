// 07/02/2020
// https://dmoj.ca/problem/dmopc15c1p5
#include<bits/stdc++.h>
using namespace std;

int psa[252][252], r, c, n, MX = 0;
void calc(int x, int y) {
    for (int i=y;i<=r;i++) {
        for (int j=x;j<=c;j++) {
            int p = psa[i-y][j-x] + psa[i][j];
            int n = psa[i-y][j] + psa[i][j-x];
            MX = max(MX, p-n);
        }
    }
}

int main() {
    cin >> c >> r >> n;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            cin >> psa[i][j];
            psa[i][j] += psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }
    for (int i=1;i<=sqrt(n)+2;i++) {
        calc(i, n/i); calc(n/i, i);
    }
    cout << MX << endl;
}