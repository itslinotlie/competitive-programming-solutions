// 11/02/2020
// https://dmoj.ca/problem/bgoi09p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+5;

int n, h[mxn], a[mxn], ans[mxn]; vector<int> mono;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) cin >> h[i];
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=n;i>=1;i--) {
        while(!mono.empty() && mono.back()<=h[i]) mono.pop_back();
        ans[i] = a[i]>mono.size()? -1:mono[mono.size()-a[i]];
        mono.push_back(h[i]);
    }
    for (int i=1;i<=n;i++) cout << ans[i] << " "; cout << endl;
}