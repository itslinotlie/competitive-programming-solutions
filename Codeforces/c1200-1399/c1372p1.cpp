// 07/11/2020
// https://codeforces.com/contest/1372/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int n, x, tmp;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x; tmp = 1;
        for (int j=1;j<=x;j++) {
            if (j%2==0) {
                cout << tmp << " ";
                tmp+=2;
            } else {
                cout << tmp << " ";
            }
        }
        cout << endl;
    }
}