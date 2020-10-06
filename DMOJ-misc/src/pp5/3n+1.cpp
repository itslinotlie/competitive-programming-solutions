// 09/19/2020
// https://dmoj.ca/problem/collatz
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll x, cnt;
int main() {
    cin >> x;
    while(x>1) {
        if(x%2) x=x*3+1;
        else x/=2;
        cnt++;
    }
    cout << cnt << "\n";
}