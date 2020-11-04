// 09/08/2020
#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e5+5;
typedef long long ll;

int n; ll x, ans, lo[mxn], hi[mxn];
ll query(int idx, ll tree[]) {
    ll sum = 0;
    for (int i=idx;i<=mxn;i+=i&-i) {
        sum += tree[i];
    }
    return sum;
}
void update(int idx, ll val, ll tree[]) {
    for (int i=idx;i>0;i-=i&-i) {
        tree[i] += val;
    }
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x;
        ans += min(query(x, lo), query(n-x+1, hi));
        update(x, 1, lo); update(n-x+1, 1, hi);
    }
    cout << ans << "\n";
}