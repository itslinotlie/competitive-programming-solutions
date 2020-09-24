// 06/11/2020
// https://dmoj.ca/problem/dmopc15c2p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, sword = 0, ans = 0;
int main() {
    cin >> n >> k;
    while(n>0) {
        n--;
        sword++;
        ans++;
        if(sword==k) {
            n++;
            sword = 0;
        }
    }
    cout << ans;
}