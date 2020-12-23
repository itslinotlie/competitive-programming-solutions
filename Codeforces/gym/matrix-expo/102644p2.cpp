// 10/14/2020
// https://codeforces.com/gym/102644/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mod = 1e9+7;
ll n;
struct Matrix {
    int a[2][2] = {{0, 0}, {0, 0}};
    Matrix operator* (const Matrix &other) {
        Matrix product;
        REP(i, 2) REP(j, 2) REP(k, 2) {
            product.a[i][k] = (product.a[i][k] + (ll)a[i][j]*other.a[j][k])%mod;
        }
        return product;
    }
};
Matrix bin_expo(Matrix a, ll k) {
    Matrix product;
    REP(i, 2) product.a[i][i] = 1;
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
    cin >> n;
    Matrix single;
    single.a[0][0] = 19; //happy to happy
    single.a[0][1] = 7; //happy to sad
    single.a[1][0] = 6; //sad to happy
    single.a[1][1] = 20; //sad to sad
    Matrix ans = bin_expo(single, n);
    cout << ans.a[0][0] << "\n";
}