// 11/03/2020
// https://dmoj.ca/problem/graph1p1
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int n, k, ans;
struct Matrix {
    vector<vector<int>> a = vector<vector<int>>(n, vector<int>(n));
    Matrix operator*(const Matrix &other) {
        Matrix product;
        REP(i, n) REP(j, n) REP(k, n) {
            product.a[i][k] = (product.a[i][k] + (ll)a[i][j]*other.a[j][k]);
        }
        return product;
    }
};
Matrix binpow(Matrix a, int k) {
    Matrix product;
    REP(i, n) product.a[i][i] = 1;
    while(k>0) {
        if(k%2) product = product * a;
        a = a * a;
        k/=2;
    }
    return product;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    Matrix a;
    REP(i, n) {
        REP(j, n) {
            cin >> a.a[i][j];
        }
    }
    Matrix ret = binpow(a, k);
    REP(i, n) {
        REP(j, n) {
            ans = (ans + ret.a[i][j]);
        }
    }
    cout << ans << endl;
}