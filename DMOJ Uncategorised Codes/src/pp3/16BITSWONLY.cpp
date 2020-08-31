// 08/17/2020
// https://dmoj.ca/problem/16bitswonly
#include<bits/stdc++.h>
using namespace std;

int n; long long a, b, c;
int main() {
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        if(a*b==c) cout << "POSSIBLE DOUBLE SIGMA\n";
        else cout << "16 BIT S/W ONLY\n";
    }
}