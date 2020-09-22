// 09/03/2020
// https://dmoj.ca/problem/nccc5j3s1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e2+5;

int n, x, arr[mxn], ans;
int main() {
    cin >> n >> x;
    for (int i=1;i<=n;i++) cin >> arr[i];
    sort(arr+1, arr+1+n);
    for (int i=2;i<n;i++) {
        if(arr[i]==x) ans+=(i-1)*(n-i);
    }
    cout << ans << endl;
}