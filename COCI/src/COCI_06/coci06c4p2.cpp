// 09/22/2020
// https://dmoj.ca/problem/coci06c4p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 55;

int r, c, x, y; char g[mxn][mxn];
int main() {
    scanf("%d%d%d%d", &r, &c, &x, &y);
    for (int i=0;i<r;i++) scanf("%s", g[i]);
    for (int i=0;i<x*r;i++) {
        for (int j=0;j<y*c;j++) {
            cout << g[i/x][j/y];
        } cout << "\n";
    }
}