// 10/28/2020
#include<bits/stdc++.h>
using namespace std;

int n, x, lo, hi, cnt;
int main() {
    cin >> n >> lo >> hi;
    for (int i=1;i<=n;i++) {
        cin >> x;
        if(lo<=x && x<=hi) cnt++;
    }
    cout << cnt << endl;
}