// 11/04/2020
// https://codeforces.com/contest/259/problem/B
#include<bits/stdc++.h>
using namespace std;

int a[3][3], x[3], sum;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) cin >> a[i][j];
    }
    x[0] = a[0][1] + a[0][2];
    x[1] = a[1][0] + a[1][2];
    x[2] = a[2][0] + a[2][1];
    sum = (x[0]+x[1]+x[2])/2;
    for (int i=0;i<3;i++) a[i][i] = sum-x[i];
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            cout << a[i][j] << " ";
        } cout << endl;
    }
}