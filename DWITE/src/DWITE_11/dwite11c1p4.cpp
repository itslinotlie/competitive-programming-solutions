// 08/31/2020
// https://dmoj.ca/problem/dwite11c1p4
#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i=1, x;i<=5;i++) {
        cin >> x; int ans = 0;
        for (int j=0;j<=x;j++) {
            int tmp = j;
            while(tmp!=0) {
                if(tmp%10==0) ans++;
                tmp/=10;
            }
        }
        cout << ans+1 << endl;
    }
}