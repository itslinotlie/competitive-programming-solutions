// 07/19/2020
// https://dmoj.ca/problem/tle17c2p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+2;

int n, q, x, psa[mxn];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x; psa[x]--;
    }
    for (int i=1;i<=mxn;i++) psa[i]+=psa[i-1];
    cin >> q;
    for (int i=1;i<=q;i++) {
        cin >> x;
        cout << psa[x]+x << endl;
    }
}