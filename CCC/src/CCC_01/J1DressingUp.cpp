// 06/26/2020
// https://dmoj.ca/problem/ccc01j1
#include<bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    for (int i=1;i<=n/2;i++) {
        for (int j=2*i-1;j>0;j--) cout << "*";
        for (int j=2*n-2*(2*i-1);j>0;j--) cout << " ";
        for (int j=2*i-1;j>0;j--) cout << "*";
        cout << endl;
    }
    for (int i=1;i<=2*n;i++) cout << "*"; cout << endl;
    for (int i=n/2;i>=1;i--) {
        for (int j=2*i-1;j>0;j--) cout << "*";
        for (int j=2*n-2*(2*i-1);j>0;j--) cout << " ";
        for (int j=2*i-1;j>0;j--) cout << "*";
        cout << endl;
    }
}