// 09/02/2020
// https://dmoj.ca/problem/coci19c1p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int q; ll a, b, x, y, l, r, ans;
int main() {
    cin >> q;
    while(q--) {
        cin >> a >> b; ans = 0;
        l = a%9; r = b%9;
        x = (b-a)/9;
        ans += x*45;
        while(l!=r) {
            ans+=!l? 9:l;
            l=(l+1)%9;
        }
        ans+=(!l)? 9:l;
        cout << ans << endl;
    }
}