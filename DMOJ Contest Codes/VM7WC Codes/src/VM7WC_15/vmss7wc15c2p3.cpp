// 07/29/2020
// https://dmoj.ca/problem/vmss7wc15c2p3
#include<bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> pii;

int n; long x, w, ans; stack<pii> mono;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x; w = 0;
        //decreasing mono
        while(!mono.empty() && mono.top().first<x) {
            ans+=mono.top().second;
            mono.pop();
        }
        while(!mono.empty() && mono.top().first==x) {
            ans+=mono.top().second;
            w = mono.top().second;
            mono.pop();
        }
        if(!mono.empty()) ans++;
        mono.push({x, w+1});
    }
    cout << ans << endl;
}