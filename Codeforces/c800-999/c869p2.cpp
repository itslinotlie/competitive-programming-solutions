// 11/06/2020
// https://codeforces.com/contest/869/problem/B
#include<bits/stdc++.h>
using namespace std;

long long a, b, x(1);
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    if(b-a>=10) puts("0");
    else {
        for (long long i=a+1;i<=b;i++) {
            x=(x*(i%10)%10)%10;
        }
        cout << x << endl;
    }
}