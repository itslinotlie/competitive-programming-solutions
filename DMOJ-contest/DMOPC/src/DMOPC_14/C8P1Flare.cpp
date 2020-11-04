// 09/03/2020
// https://dmoj.ca/problem/dmopc14c7p1
#include<bits/stdc++.h>
using namespace std;
const double val = 0.0000001;

double x;
double fun(double i) {
    return x*i + (-9.8)*i*i/2;
}
int main() {
    cin >> x;
    double lo = 0, hi = 1e10; int cnt = 1e3;
    while(lo<hi) {
        double mid = (lo+hi)/2;
        if(fun(mid)<0) hi = mid+val;
        else lo = mid+val;
        cnt--;
        if(cnt==0) break;
    }
    printf("%.6f\n", hi);
}