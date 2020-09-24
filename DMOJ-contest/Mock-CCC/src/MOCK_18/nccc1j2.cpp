// 08/26/2020
// https://dmoj.ca/problem/nccc1j2
#include<bits/stdc++.h>
using namespace std;

string x; char prv, cur;
int main() {
    cin >> x;
    prv = x[0];
    for (int i=1;i<x.size();i++) {
        cur = x[i];
        if(prv==cur) {cout<<"Even\n"; return 0;}
        prv = cur;
    }
    cout<<"Odd\n";
}