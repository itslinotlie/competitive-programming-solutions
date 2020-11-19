// 11/06/2020
// https://codeforces.com/contest/557/problem/b
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n; double a[2*mxn], x, w;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> w;;
    for (int i=0;i<2*n;i++) cin >> a[i];
    sort(a, a+2*n);
    x = min(w/(3*n), min(a[0], a[n]/2));
    cout << setprecision(6) << fixed << 3*n*x << endl;
}