// 09/10/2020
#include<bits/stdc++.h>
using namespace std;

int n, k; double ans;
int main() {
    cin >> k >> n;
    for (int i=1,x;i<=n;i++) {
        cin >> x;
        if(x==1) ans+=0.5;
        else if(x==2) ans+=1;
        else ans+=5;
    }
    puts(ans<=k? "Continue":"Return");
}