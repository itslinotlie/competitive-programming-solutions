// 06/25/2020
// https://dmoj.ca/problem/binary
#include<bits/stdc++.h>
using namespace std;

int n;
string toBinary(int x) {
    if (x==0) return "0";
    if (x==1) return "1";
    if (x%2==0) return toBinary(x/2) + "0";
    return toBinary(x/2) + "1";
}
int main() {
    scanf("%d", &n);
    for (int i=1,x;i<=n;i++) {
        string k = "";
        scanf("%d", &x);
        k = toBinary(x);
        while(k.length()%4!=0) k="0"+k;
        for (int i=0;i<k.length();i++) {
            if (i%4==0 && i!=0) cout << " " << k[i];
            else cout << k[i];
        } cout << "\n";
    }
}