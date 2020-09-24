// 06/25/2020
// https://dmoj.ca/problem/ccc07s4
#include<bits/stdc++.h>
using namespace std;

int n, a, b, dp[10001];
vector<int> adj[10001];
int main() {
    scanf("%d%d%d", &n, &a, &b);
    dp[1] = 1;
    while(a!=0 && b!=0) {
        adj[a].push_back(b);
        scanf("%d%d", &a, &b);
    }
    for (int i=1;i<=n;i++) {
        for (int j=0;j<adj[i].size();j++) {
            dp[adj[i][j]]+=dp[i];
        }
    }
    cout << dp[n] << endl;
}