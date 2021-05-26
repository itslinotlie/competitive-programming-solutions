// 09/04/2020
// https://codeforces.com/contest/1409/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int t, a, b, x;
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b;
        x = abs(b-a);
        if(!x) cout << 0 << endl;
        else if(a%10 == b%10) cout << x/10 << endl;
        else cout << x/10 + 1 << endl;
    }
}