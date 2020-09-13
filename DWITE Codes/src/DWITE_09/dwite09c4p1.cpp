// 09/02/2020
// https://dmoj.ca/problem/dwite09c4p1
#include<bits/stdc++.h>
using namespace std;

double x;
int main() {
    for (int i=1;i<=5;i++) {
        cin >> x;
        cout << (int)(9000/x + 0.5) << endl;
    }
}