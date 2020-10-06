// 09/16/2020
// https://dmoj.ca/problem/avatarwater
#include<bits/stdc++.h>
using namespace std;

int a[3], b, c = 0x3f3f3f3f;
int main() {
    for (int i=0;i<3;i++) {
        cin >> a[i];
        b = max(b, a[i]);
        c = min(c, a[i]);
    }
    cout << b-c << "\n";
}