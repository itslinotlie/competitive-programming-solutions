// 07/04/2020
// https://dmoj.ca/problem/dwite10c1p1
#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i=1;i<=5;i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c<1997 || (c==1997 && b<10) || (c==1997 && b==10 && a<=27)) puts("old enough");
        else puts("too young");
    }
}