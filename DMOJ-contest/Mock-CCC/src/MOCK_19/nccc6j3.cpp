// 09/24/2020
// https://dmoj.ca/problem/nccc6j3
#include<bits/stdc++.h>
using namespace std;

int t, a, b, n;
bool fun(int sum) {
    if(sum>n) return false;
    if(sum==n) return true;
    return fun(sum+a) || fun(sum+b);
}
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b >> n;
        fun(0)? cout<<"YES\n":cout<<"NO\n";
    }
}