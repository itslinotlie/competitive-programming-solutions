// 10/08/2020
// https://codeforces.com/contest/573/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;
typedef long long ll;

int n; ll a[mxn];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        while(a[i]%2==0) a[i]/=2;
        while(a[i]%3==0) a[i]/=3;
    }
    for (int i=2;i<=n;i++) {
        if(a[i]!=a[1]) return 0 * puts("No");
    }
    puts("Yes");
}