// 07/15/2020
// https://dmoj.ca/problem/dmopc15c6p5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 3e6;
typedef pair<int, int> pii;

int n, k, a[mxn+2]; long long ans;
int main() {
    cin >> n >> k;
    deque<pii> mn, mx; int l=1;
    for (int r=1;r<=n;r++) {
        cin >> a[r];
        while(!mn.empty() && mn.back().first>a[r]) mn.pop_back();
        mn.push_back({a[r], r});
        while(!mx.empty() && mx.back().first<a[r]) mx.pop_back();
        mx.push_back({a[r], r});
        
        while(!mn.empty() && !mx.empty() && mx.front().first-mn.front().first>k) {
            l = 1 + min(mn.front().second, mx.front().second);
            while(!mn.empty() && mn.front().second<l) mn.pop_front();
            while(!mx.empty() && mx.front().second<l) mx.pop_front();
        }
        ans+=(r-l+1);
    }
    cout << ans << endl;
}