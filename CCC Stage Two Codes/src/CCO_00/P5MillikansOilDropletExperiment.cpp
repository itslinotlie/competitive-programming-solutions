// 07/02/2020
// https://dmoj.ca/problem/cco00p5
#include<bits/stdc++.h>
using namespace std;

int n; double arr[102], pre = 0x3f3f3f3f, cur = 0x3f3f3f3f, x;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> arr[i];
    while (true) {
        pre = cur;
        for (int i=1;i<=n;i++) {
            x = floor(arr[i]*1.01/cur);
            if (x*cur < arr[i]*0.99) cur = arr[i]*1.01/(x+1);
        }
        if (pre==cur) break;
    }
    printf("%.4f\n", cur);
}