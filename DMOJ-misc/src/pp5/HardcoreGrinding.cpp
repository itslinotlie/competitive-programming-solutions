// 07/05/2020
// https://dmoj.ca/problem/grind
#include<bits/stdc++.h>
using namespace std;
const int MX = (int)1e7;

int n, a, b, psa[MX+2], ans;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a >> b;
        psa[a]++; psa[b]--;
    }
    for (int i=1;i<=MX;i++) {
        psa[i]+=psa[i-1];
        ans = max(ans, psa[i]);
    }
    cout << ans << endl;
}