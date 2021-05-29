// 10/31/2020
// https://dmoj.ca/problem/wc17c2j3
#include<bits/stdc++.h>
using namespace std;

int n, m, a[9], x;
int main() {
    cin >> n >> m;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a, a+n);
    for (int i=0;i<n;i++) {
        if(a[i]>=m) x++;
    }
    cout << min(n, 2*x) << "\n";
}