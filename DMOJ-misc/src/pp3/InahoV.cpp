// 10/01/2020
// https://dmoj.ca/problem/inaho5
#include<bits/stdc++.h>
using namespace std;

int n; long long x; unsigned long long sum;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x;
        sum+=abs(x);
    }
    if(sum==0) cout << sum << endl;
    else cout << "-" << sum << endl;
}