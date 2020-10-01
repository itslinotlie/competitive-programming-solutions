// 07/29/2020
// https://dmoj.ca/problem/acc3p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6;

int n, k, a[mxn+2], frq[mxn+2], cnt; long long  ans;
int main() {
    cin >> n >> k;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int l=1, r=1;r<=n;r++) {
        if(frq[a[r]]==0) cnt++;
        frq[a[r]]++;
        while(cnt>=k) {
            if(frq[a[l]]==1) cnt--;
            frq[a[l]]--;
            l++;
        }
        ans+=l-1;
    }
    cout << ans << endl;
}