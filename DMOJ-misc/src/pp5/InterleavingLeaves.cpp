// 09/09/2020
// https://dmoj.ca/problem/acmtryouts0b
#include<bits/stdc++.h>
using namespace std;

int t, n, x, y; string a, b;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        for (int i=a.size()-1;i>=0;i--) {
            cout << b[i] << a[i];
        } puts("");
    }
}