// 07/17/2020
// https://codeforces.com/contest/1385/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int t, x, y, z;
int main() {
    cin >> t;
    for (int i=1;i<=t;i++) {
        cin >> x >> y >> z;
        if (x==y && y==z) {
            cout << "YES\n" << x << " " << x << " " << x << endl;
            continue;
        }
        if(x!=y && y!=z && z!=x) {
            cout << "NO\n";
            continue;
        }
        int mn = min(x, min(y, z)), mx = max(x, max(y, z));
        if(x==y&&x==mn || y==z&&y==mn || x==z&&x==mn) {
            cout << "NO\n";
            continue;
        }
        if (mn<y || mn<x || mn<z) {
            cout << "YES\n";
            cout << mn << " " << 1 << " " << mx << endl;
        }
    }
}