// 09/24/2020
// https://dmoj.ca/problem/wc17c3j2
#include<bits/stdc++.h>
using namespace std;

int n; char c; long double x, maxi;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> c;
        if(c=='P') x++;
        maxi = max(maxi, x/i);
    }
    printf("%.5Lf\n", maxi);
}