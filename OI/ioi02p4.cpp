// 08/02/2020
// https://dmoj.ca/problem/ioi02p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e4;

int n, s, t[mxn+4], f[mxn+4], dp[mxn+4]; deque<int> dq;
double slope(int j, int k) {
    double num = dp[j] - dp[k];
    double dem = t[j] - t[k];
    return num/dem;
}
int main() {
    cin >> n >> s;
    for (int i=1;i<=n;i++)  
        cin >> t[i] >> f[i];
    for (int i=n;i>=1;i--) 
        t[i]+=t[i+1], f[i]+=f[i+1];
    dq.push_back(n+1);
    for (int i=n;i>=1;i--) {
        while(dq.size()>1 && slope(dq[0], dq[1])<=f[i]) dq.pop_front();
        int pt = dq.front();
        dp[i] = dp[pt] + (s+t[i]-t[pt])*f[i];
        while(dq.size()>1 && slope(dq[dq.size()-2], dq.back())>=slope(dq.back(), i)) dq.pop_back();
        dq.push_back(i);
    }
    cout << dp[1] << endl;
}