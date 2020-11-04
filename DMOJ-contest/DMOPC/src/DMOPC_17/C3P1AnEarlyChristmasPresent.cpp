// 08/31/2020
// https://dmoj.ca/problem/dmopc17c3p1
#include<bits/stdc++.h>
using namespace std;

int MM = 0x3f3f3f3f, n;
int main() {
    cin >> n;
    for (int i=1,x;i<=n;i++) {
        cin >> x;
        MM = min(MM, x);
    }
    cout << MM << endl;
}