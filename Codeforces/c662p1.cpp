// 10/05/2020
// https://codeforces.com/contest/622/problem/A
#include<bits/stdc++.h>
using namespace std;

long long x, i=1;
int main() {
    cin >> x; x--;
    for (i=1;i<=x;i++) x-=i;
    cout << x+1 << endl;
}