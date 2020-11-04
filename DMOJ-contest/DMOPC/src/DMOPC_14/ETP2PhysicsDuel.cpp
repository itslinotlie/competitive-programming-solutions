// 08/19/2020
// https://dmoj.ca/problem/dmopc14ce1p2
#include<bits/stdc++.h>
using namespace std;

int n; double s, x, t, h, v;
int main() {
    scanf("%d", &n);
    while(n--) {
        cin >> s >> x >> t;
        h+=t*s*sin(x*M_PI/180);
    }
    v = sqrt(2*9.8*h);
    cout<<(int)(v+0.5)<<"\n";
}