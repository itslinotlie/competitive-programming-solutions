// 07/02/2020
// https://dmoj.ca/problem/dmopc18c5p3
#include<bits/stdc++.h>
using namespace std;

int n; long m, arr[200005];
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> arr[i];
    int L = 1, R = 1, MX = 0; long sum = 0;
    for (;L<=R && R<=n;R++) {
        sum+=arr[R];
        if (sum<m) MX = max(MX, R-L+1);
        while(sum>=m) {
            sum-=arr[L]; L++;
            if (sum<m) MX = max(MX, R-L+1);
        }
    }
    cout << MX << endl;
}