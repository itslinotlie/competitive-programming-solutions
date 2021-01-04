// 06/13/2020
// https://dmoj.ca/problem/ccc15s2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, a[1000001], ans;
int main() {
    cin >> n >> k;
    for (int i=1;i<=n;i++) {
        char c;
        cin >> c;
        if (c=='S') a[i] = 1;
        else if (c=='M') a[i] = 2;
        else a[i] = 3;
    }   
    for (int i=1;i<=k;i++) {
        char c; int x, tmp;
        cin >> c >> x;
        if (c=='S') tmp = 1;
        else if (c=='M') tmp = 2;
        else tmp = 3;
        if (tmp<=a[x]) 
            a[x] = -1, ans++;
    }
    cout << ans << "\n";
}