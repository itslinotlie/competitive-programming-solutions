// 08/13/2020
// https://dmoj.ca/problem/acmtryouts0a
#include<bits/stdc++.h>
using namespace std;

int t, n, a, x;
int main() {
    cin >> t;
    for(int i=1;i<=t;i++) {
        cin >> n >> x;
        for (int j=2;j<=n;j++) {
            cin >> a;
            x = max(x, a);
        }
        cout << x << endl;
    }
}