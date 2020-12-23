// 12/22/2020
// https://codeforces.com/gym/102644/problem/E
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
#define ul unsigned int
const int mxn = 65;

ul k;
struct Matrix {
    vector<vector<ul>> a = vector<vector<ul>>(mxn, vector<ul>(mxn));
    Matrix operator*(const Matrix &other) {
        Matrix product;
        REP(i, mxn) REP(j, mxn) REP(k, mxn) {
            product.a[i][k] = (product.a[i][k] + a[i][j]*other.a[j][k]);
        }
        return product;
    }
};
Matrix binpow(Matrix a, ul k) {
    Matrix product;
    REP(i, mxn) product.a[i][i] = 1;
    while(k>0) {
        if(k%2) product = product * a;
        a = a * a;
        k/=2;
    }
    return product;
}
bool inside(int row, int col) {
    return 0<=min(row, col) && max(row, col)<8;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k; k++;
    Matrix single;
    REP(row, 8) {
        REP(col, 8) {
            for(int dr:{-2, -1, 1, 2})  {
                for(int dc:{-2, -1, 1, 2}) {
                    if(abs(dr)!=abs(dc)) {
                        int nr = row+dr;
                        int nc = col+dc;
                        if(inside(nr, nc)) {
                            single.a[8*row+col][8*nr+nc] = 1;
                        }
                    }
                }
            }
        }
    }
    REP(i, 65) {
        single.a[i][64] = 1;
    }
    Matrix total = binpow(single, k);
    cout << total.a[0][64] << endl;
}