// 06/14/2020
// https://dmoj.ca/problem/dmopc15c1p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; double MV = -1; string val;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        string x; double k;
        cin >> x >> k;
        if (k>MV) {
            MV = k;
            val = x;
        }
    }    
    cout << val << endl;
}