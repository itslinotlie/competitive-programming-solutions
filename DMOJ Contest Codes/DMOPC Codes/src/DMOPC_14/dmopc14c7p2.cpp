// 07/15/2020
// https://dmoj.ca/problem/dmopc14c6p2
#include<bits/stdc++.h>
using namespace std;

int n, mn = 0x3f3f3f3f, mx, a[1002];
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        mn = min(mn, a[i]); mx = max(mx, a[i]);
    }
    bool start = false, top = false, ans = true;;
    for (int i=1;i<=n;i++) {
        if (a[i]==mn) start = true;
        else if (start && a[i]!=mx) {
            if (a[i]<a[i-1]) {
                ans = false;
                break;
            }
        }
        else if (start && a[i]==mx) {
            top = true;
            break;
        }
    }
    top && ans? cout << (mx-mn) << endl : cout << "unknown" << endl;
}