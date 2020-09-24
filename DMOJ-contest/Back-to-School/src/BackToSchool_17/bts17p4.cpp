// 07/23/2020
// https://dmoj.ca/problem/bts17p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+2;
typedef pair<int, int> pii;

int n, m, j, a, b, arr[mxn];
deque<pii> dq;
int main() {
    cin >> n >> m >> j; memset(arr, 0x3f, sizeof(arr));
    for (int i=1;i<=m;i++) {
        cin >> a >> b;
        arr[a] = b;
    }
    dq.push_front({0, 0});
    for (int i=1;i<=n;i++) {
        arr[i] = max(arr[i], dq.back().first);
        while(!dq.empty() && dq.front().first>arr[i]) dq.pop_front();
        dq.push_front({arr[i], i});
        if(dq.back().second<=i-j) dq.pop_back();
    }
    dq.back().first==0x3f3f3f3f? cout << -1 << endl: cout << dq.back().first << endl;
}