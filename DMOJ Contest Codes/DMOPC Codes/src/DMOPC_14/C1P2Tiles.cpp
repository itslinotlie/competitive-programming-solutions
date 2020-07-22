// 06/12/2020
// https://dmoj.ca/problem/dmopc14c1p2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int w, l, x;
int main() {
    cin >> w >> l >> x;
    int ans = (w/x)*(l/x);
    cout << ans << endl;
}