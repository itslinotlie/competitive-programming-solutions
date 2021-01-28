// 09/09/2020
// https://dmoj.ca/problem/coci15c6p4
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9;
typedef pair<int, int> pii;

int n, dp[1<<20]; vector<pii> vec;
int gcd(int x, int y) {
    return y==0? x:gcd(y, x%y);
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=i+1;j<=n;j++) {
            if(gcd(i, j)==1) vec.push_back({i-1, j-1});
        }
    }
    n--; dp[0] = 1;
    for (int i=0;i<vec.size();i++) {
        int x = vec[i].first, y = vec[i].second;
        for (int mask=(1<<n)-1;mask>=0;mask--) { //mask=011000, anotherMask=000111 --> 011111
            int anotherMask = ((1<<y)-(1<<x))|mask;
            dp[anotherMask] = (dp[anotherMask]+dp[mask]) % MOD;
        }
    }
    cout << dp[(1<<n)-1] << "\n";
}