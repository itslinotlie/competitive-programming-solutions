// 08/21/2020
// https://dmoj.ca/problem/dmpg16s1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, a[mxn], b[mxn], ans; priority_queue<int, vector<int>, greater<int>> pqA, pqB;
int main() {
    scanf("%d", &n);
    for(int i=1;i<=n;i++) scanf("%d", &a[i]), pqB.push(a[i]);
    for(int i=1;i<=n;i++) scanf("%d", &b[i]), pqA.push(b[i]);
    sort(a, a+n+1); sort(b, b+n+1);
    for (int i=1;i<=n;i++) {
        if(a[i]<=pqA.top()) continue;
        pqA.pop(); ans++;
    }
    cout << ans << "\n"; ans = 0;
    for (int i=1;i<=n;i++) {
        if(b[i]<=pqB.top()) continue;
        pqB.pop(); ans++;
    }
    cout << ans << "\n";
}