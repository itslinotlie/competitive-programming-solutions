// 10/31/2020
// https://dmoj.ca/problem/wc17c3j1
#include<bits/stdc++.h>
using namespace std;

int x;
int main() {
    cin >> x;
    cout << pow(10, ceil(log10(x+1))) - x << "\n";
}