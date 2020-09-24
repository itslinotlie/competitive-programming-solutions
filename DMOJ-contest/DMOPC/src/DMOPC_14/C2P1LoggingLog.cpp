// 06/13/2020
// https://dmoj.ca/problem/dmopc14c2p1
#include<bits/stdc++.h>
using namespace std;

int d, x, t, ans;
int main() {
    cin >> d;
    for (int i=1;i<=d;i++) {
        cin >> t; ans = 0;
        for (int j=1;j<=t;j++) {
            cin >> x;
            ans+=x;
        }
        ans == 0? cout << "Weekend" << endl: cout << "Day " << i << ": " << ans << endl;
    }
}