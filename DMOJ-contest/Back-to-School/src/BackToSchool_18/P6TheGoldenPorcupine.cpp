// 07/06/2020
// https://dmoj.ca/problem/bts18p6
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5;

int n, t, l, r, a, b, c;
long long psa[4][mx+2];

long long sum(int k, int x, int y, int z) {
    return (long long)x*k*k + (long long)y*k + z;
}

int main() {
    scanf("%d%d", &n, &t);
    for (int i=1;i<=n;i++) {
        scanf("%d%d%d%d%d", &l, &r, &a, &b, &c);
        long long x1 = sum(0, a, b, c), x2 = sum(1, a, b, c);
        psa[2][l+1] += 2*a;
        psa[2][r+1] += -2*a;
        psa[1][l+1] += x2-x1 - 2*a; 
        psa[1][r+1] += -((x2-x1) - 2*a + 2*a*(r-l));
        psa[0][l]+=c; psa[0][r+1] -=sum(r-l, a, b, c);
    }
    for (int i=2;i>=0;i--) {
        for (int j=1;j<=t;j++) {
            psa[i][j] += psa[i][j-1]+psa[i+1][j];
        }
    }
    for (int i=1;i<=t;i++) cout << psa[0][i] << " "; cout << endl;
}