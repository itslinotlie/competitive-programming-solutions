// 09/01/2020
// https://dmoj.ca/problem/dwite07c4p1
#include<bits/stdc++.h>
using namespace std;

double a, p, t, d;
int main() {
    for (int i=1;i<=5;i++) {
        cin >> a >> p; t = 0;
        a = a*M_PI/180;
        t = p*sin(a)/9.81 * 2;
        d = p * t * cos(a);
        cout << (int)(d+0.5) << endl;
    }
}