// 08/24/2020
// https://dmoj.ca/problem/tle16c1p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3 + 5;

int d, q; double a[mxn], b[mxn];
int main() {
    cin >> d;
    for (int i=0;i<d;i++) cin >> a[i];
    cin >> q;
    for (int i=0;i<q;i++) cin >> b[i];
    sort(a, a+d); sort(b, b+q);
    if(10/a[d-1]>25/b[0]) cout<<"Dimes are better\n";
    else if(10/a[0]<25/b[q-1]) cout<<"Quarters are better\n";
    else cout<<" Neither coin is better\n";
}