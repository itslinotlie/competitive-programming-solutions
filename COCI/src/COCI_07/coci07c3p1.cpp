// 09/22/2020
// https://dmoj.ca/problem/coci07c3p1
#include<bits/stdc++.h>
using namespace std;

int a[3], d1, d2;
int main() {
    for (int i=0;i<3;i++) cin >> a[i];
    sort(a, a+3);
    d1 = a[1] - a[0]; d2 = a[2] - a[1];
    if(d1==d2) cout << a[2] + d1 << "\n";
    else if(a[1]+d1+d1==a[2]) cout << a[1] + d1 << "\n";
    else if(a[0]+d2+d2==a[1]) cout << a[0] + d2 << "\n";
}