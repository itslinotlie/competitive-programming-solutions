// 09/22/2020
// https://dmoj.ca/problem/gfssoc1j3
#include<bits/stdc++.h>
using namespace std;

string a, b; int x, y;
int main() {
    cin >> a >> b;
    x = stoi(a.substr(0, 2))*3600 + stoi(a.substr(3, 5))*60 + stoi(a.substr(6, 8));
    y = stoi(b.substr(0, 2))*3600 + stoi(b.substr(3, 5))*60 + stoi(b.substr(6, 8));
    cout << y - x << endl;
}