// 09/01/2020
// https://dmoj.ca/problem/ecoo18r1p1
#include<bits/stdc++.h>
using namespace std;

int n, t, ans; string s;
int main() {
    for (int T=1;T<=10;T++) {
        cin >> t >> n; 
        ans = 0; 
        for (int i=1;i<=n;i++) {
            cin >> s;
            if(s=="B") {
                if(ans>0) ans+=t;
                else ans=t;
            }
            ans--;
        }
        printf("%d\n", max(0, ans));
    }
}