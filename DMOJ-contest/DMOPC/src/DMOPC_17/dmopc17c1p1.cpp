// 07/12/2020
// https://dmoj.ca/problem/dmopc17c1p1
#include<bits/stdc++.h>
using namespace std;

int r, c, q, x, y; string tmp;
bool xx[1002], yy[1002];
int main() {
    cin >> r >> c; getline(cin, tmp);
    for (int i=1;i<=r;i++) {
        getline(cin, tmp);
        for (int j=1;j<=c;j++) {
            if(tmp[j-1]=='X') {
                yy[i] = true; xx[j] = true;
            }
        }
    }
    cin >> q;
    for (int i=1;i<=q;i++) {
        cin >> x >> y;
        if (yy[y] || xx[x]) cout << "Y" << endl;
        else cout << "N" << endl;
    }
}