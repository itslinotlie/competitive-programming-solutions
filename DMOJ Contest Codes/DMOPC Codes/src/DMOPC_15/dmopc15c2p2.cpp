// 08/19/2020
// https://dmoj.ca/problem/dmopc15c2p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e2+5;

int n, a[mxn], b, x, y;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++) {
        cin >> b;
        if(a[i]>b) x++;
        else if(b>a[i]) y++;
    }
    cout << x << " " << y << endl;
    if(x>y) cout << "Xyene" << endl;
    else if (y>x) cout << "FatalEagle" << endl;
    else cout << "Tie" << endl;
}