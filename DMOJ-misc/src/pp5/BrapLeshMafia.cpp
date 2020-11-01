// 10/26/2020
// https://dmoj.ca/problem/brapleshmafia
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, a, b, sum;
int main() {
    cin >> n >> k;
    for (int i=1;i<=n;i++) {
        cin >> a >> b;
        sum+=(a*b)%k;
    }
    cout << sum%k << "\n";
}