// 09/09/2020
// https://dmoj.ca/problem/dmopc15c4p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 8;

int g, n, sum, hp, hm, a[mxn]; bool flag;
int main() {
    cin >> g;
    while(g--) {
        cin >> n; sum = 0; flag = false;
        memset(a, 0, sizeof(a));
        for (int i=0;i<n;i++) cin >> a[i], sum+=a[i];
        cin >> hp >> hm;
        for (int k=1;k<1<<n;k++) {
            int tmp = 0;
            for (int i=0;i<n;i++) {
                if(k&1<<i) tmp+=a[i];
            }
            if(tmp>=hm && sum-tmp>=hp) {flag = true; break;}
        }
        puts(flag? "LETHAL":"NOT LETHAL");
    }
}