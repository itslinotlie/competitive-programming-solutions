// 10/31/2020
// https://dmoj.ca/problem/coci18c1p1
#include<bits/stdc++.h>
using namespace std;

int n, k, x;
int main() {
    cin >> n >> k;
    for (int i=1;i<k;i++) cout << i << endl, x+=i;
    cout << n-x << endl;
}