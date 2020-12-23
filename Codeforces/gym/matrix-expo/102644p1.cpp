// 10/14/2020
// https://codeforces.com/gym/102644/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=0;i<(n);i++)
#define FORE(i, x, n) for(int i=(x);i<=(n);i++)
#define RFOR(i, n) for(int i=(n);i>=1;i--)
#define f first
#define s second

int n; double p;
struct Matrix {
    double a[2][2] = {{0, 0}, {0, 0}};
    Matrix operator* (const Matrix &another) {
        Matrix product;
        FOR(i, 2) FOR(j, 2) FOR(k, 2) {
            product.a[i][k] += a[i][j] * another.a[j][k];
        }
        return product;
    }
};
Matrix bin_pow(Matrix a, int k) {
    Matrix product;
    FOR(i, 2) product.a[i][i] = 1;
    while(k>0) {
        if(k%2) {
            product = product * a;
        }
        a = a * a;
        k/=2;
    }
    return product;
}
int main() {
   cin >> n >> p;
   Matrix init;
   init.a[0][0] = 1 - p;
   init.a[1][1] = 1 - p;
   init.a[0][1] = p;
   init.a[1][0] = p;
   Matrix ans = bin_pow(init, n);
   cout << setprecision(10) << fixed << ans.a[0][0] << "\n";
}