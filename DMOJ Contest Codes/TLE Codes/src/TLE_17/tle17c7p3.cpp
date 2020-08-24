// 08/20/2020
// https://dmoj.ca/problem/tle17c7p3
#include<bits/stdc++.h>
using namespace std;
const double MN = 0.0000001;

int q; double y, z;
bool check(double x) {
    double val = x;
    for (int i=1;i<y;i++) {
        val = pow(x, val);
    }
    return val<z;
}
int main() {
    cin >> q;
    while(q--) {
        cin >> y >> z;
        double lo = 0, hi = 10;
        while(lo<=hi) {
            double md = hi - (hi-lo)/2;
            check(md)? lo=md+MN:hi=md-MN;
        }
        cout << hi << "\n";
    }
}