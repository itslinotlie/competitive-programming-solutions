// 09/07/2020
// https://dmoj.ca/problem/ioi01p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1024+5;

int I, N, A, B, X, Y, bit[mxn][mxn];
void update(int r, int c, int x) {
    for (int i=r;i<=mxn;i+=i&-i) {
        for (int j=c;j<=mxn;j+=j&-j) {
            bit[i][j]+=x;
        }
    }
}
int query(int r, int c) {
    int sum = 0;
    for (int i=r;i>0;i-=i&-i) {
        for (int j=c;j>0;j-=j&-j) {
            sum+=bit[i][j];
        }
    }
    return sum;
}
int query(int r1, int c1, int r2, int c2) {
    return query(r2, c2) - query(r1-1, c2) - query(r2, c1-1) + query(r1-1, c1-1);
}
int main() {
    do {
        cin >> I;
        if(I==0) cin >> N;
        else if(I==1) {
            cin >> A >> B >> X;
            update(A+1, B+1, X);
        }
        else if(I==2) {
            cin >> A >> B >> X >> Y;
            cout << query(A+1, B+1, X+1, Y+1) << "\n";
        }
    } while(I!=3);
}