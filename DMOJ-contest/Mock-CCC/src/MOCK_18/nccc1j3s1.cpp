// 07/11/2020
// https://dmoj.ca/problem/nccc1j3s1
#include<bits/stdc++.h>
using namespace std;

double k, p, x; int id = 1;
double f(double val) {
    return val*x + k*p/val;
}
int main() {
    cin >> k >> p >> x;
    while(f(id)>f(id+1)) id++;
    printf("%.3f\n", f(id));
}