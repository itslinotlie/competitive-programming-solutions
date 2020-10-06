// 09/09/2020
// https://dmoj.ca/problem/acmtryouts3a
#include<bits/stdc++.h>
using namespace std;

int t, n, x, mini, maxi;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> x;
        mini = maxi = x;
        for (int i=2;i<=n;i++) {
            cin >> x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        cout << mini << " " << maxi << "\n";
    }
}