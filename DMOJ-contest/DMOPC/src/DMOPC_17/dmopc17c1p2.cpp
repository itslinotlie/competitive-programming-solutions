// 08/10/2020
// https://dmoj.ca/problem/dmopc17c1p2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxn = 1e5 + 5;

int n, m; ll psa[mxn], ans, x, sum; unordered_map<ll, ll> frq;
int main() {
    scanf("%d%d", &n, &m); frq[0]++;
    for (int i=1;i<=n;i++) {
        scanf("%lld", &x); sum+=x;
        ans+=frq[sum%m];
        frq[sum%m]++;
    }
    cout << ans << endl;
}