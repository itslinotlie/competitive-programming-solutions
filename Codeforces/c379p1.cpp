// 10/05/2020
// https://codeforces.com/contest/379/problem/A
#include<bits/stdc++.h>
using namespace std;

int a, b, x, ans;
int main() {
    cin >> a >> b;
    for (int i=0;i<10;i++) {
        if(x) a=x/b; 
        x = x%b;
        while(a>0) {
            ans+=a;
            x+=a%b;
            a/=b;
        }
        if(x<b) x = 0;
    }
    cout << ans << endl;
}