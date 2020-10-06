// 09/03/2020
// https://dmoj.ca/problem/implementation1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+5;

int n, a[mxn], b[mxn];
int main() {
    cin >> n;
    for (int i=0, x;i<n;i++) {
        cin >> x;
        a[i] = x+i; b[i] = x-i;
    }
    sort(a, a+n); sort(b, b+n);
    cout << max(a[n-1]-a[0], b[n-1]-b[0]) << endl;
}