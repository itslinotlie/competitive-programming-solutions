// 09/09/2020
// https://dmoj.ca/problem/dwite11c4p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 16;

int n, a[mxn], dp[1<<mxn];
bool check(int mask) {
    vector<int> vec;
    for (int i=0;i<n;i++) {
        if(mask&1<<i) vec.push_back(a[i]);
    }
    if(vec.size()==1) return true;
    bool up = true, down = true;
    for (int i=1;i<vec.size();i++) {
        if(vec[i]>vec[i-1]) down = false;
        if(vec[i]<vec[i-1]) up = false;
    }
    return up || down;
}
int fun (int mask) {
    if(dp[mask]!=-1) return dp[mask];
    if(check(mask)) return dp[mask] = 1;
    int ret = 0;
    for (int k=0;k<n;k++) {
        if(mask&1<<k) ret |= fun(mask^(1<<k));
    }
    return dp[mask] = !ret;
}
int main() {
    for (int T=1;T<=5;T++) {
        for (int t=1;t<=3;t++) {
            cin >> n; memset(dp, -1, sizeof(dp));
            for (int i=0;i<n;i++) cin >> a[i];
            cout << (fun((1<<n)-1)==0? "A":"B");
        } puts("");
    }
}