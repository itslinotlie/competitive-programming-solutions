// 07/18/2020
// https://dmoj.ca/problem/dmpg16s5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+2;
typedef long long ll;
typedef pair<ll, ll> pii;

int n, k; ll arr[2*mxn], ans; deque<pii> dq;
int main() {
    cin >> n >> k;
    for (int i=1;i<=n;i++)  cin >> arr[i], arr[i+n] = arr[i];
    for (int i=1;i<2*n;i++) arr[i]+=arr[i-1];
    dq.push_front({0, 0});
    for (int r=1;r<2*n;r++) {
        while(!dq.empty() && dq.back().first>=arr[r]) dq.pop_back();
        dq.push_back({arr[r], r});
        if(dq.front().second < r-k) dq.pop_front();
        ans = max(ans, arr[r]-dq.front().first);
    }
    cout << ans << endl;
}
