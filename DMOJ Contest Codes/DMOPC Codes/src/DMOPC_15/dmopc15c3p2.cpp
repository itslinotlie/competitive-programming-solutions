// 07/11/2020
// https://dmoj.ca/problem/dmopc15c3p2
#include<bits/stdc++.h>
using namespace std;

int n; long long sum, ans, a[100002];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    if (sum%n!=0) {cout << "Impossible" << endl; return 0;}
    sum/=n;
    for (int i=1;i<=n;i++) ans+=abs(a[i]-sum);
    cout << ans/2 << endl;
}