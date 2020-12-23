// 10/14/2020
// https://codeforces.com/gym/102644/problem/D
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

int n, m; ll k;
struct Matrix {
    vector<vector<int>> a = vector<vector<int>>(n, vector<int>(n)); //all 0
    Matrix operator*(const Matrix &other) {
        Matrix product;
        vector<vector<ll>> tmp(n, vector<ll>(n));
        REP(i, n) REP(j, n) REP(k, n) {
            tmp[i][k] += (ll) a[i][j] * other.a[j][k];
            if(tmp[i][k]>=8LL*mod*mod) tmp[i][k] -= 8LL*mod*mod;
            // product.a[i][k] = (product.a[i][k] + (ll)a[i][j]*other.a[j][k])%mod;
        }
        REP(i, n) REP(j, n) product.a[i][j] = tmp[i][j]%mod;
        return product;
    }
};
Matrix binpow(Matrix a, ll k) {
    Matrix product;
    REP(i, n) product.a[i][i] = 1;
    while(k) {
        if(k%2) product = product * a;
        a = a * a;
        k/=2;
    }
    return product;
}
int main() {
    cin >> n >> m >> k;
    Matrix single;
    for (int i=1,u,v;i<=m;i++) {
        cin >> u >> v;
        single.a[u-1][v-1] = 1;
    }
    Matrix total = binpow(single, k);
    int ans = 0;
    REP(i, n) REP(j, n) {
        ans = (ans + total.a[i][j]) %mod;
    }
    cout << ans << "\n";
}