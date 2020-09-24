// 09/01/2020
// https://dmoj.ca/problem/dwite07c3p1
#include<bits/stdc++.h>
using namespace std;

int x, ans;
int main() {
    for (int i=1;i<=5;i++) {
        cin >> x; ans = 0;
        for (int j=2;j<=x;j++) {
            bool flag = false;
            while(x%j==0) {
                x/=j; flag = true;
            }
            if(flag) ans++;
        }
        printf("%s\n", ans==3? "valid":"not");
    }
}