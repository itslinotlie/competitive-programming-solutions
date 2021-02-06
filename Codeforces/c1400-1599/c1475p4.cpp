// 02/05/2021
// https://codeforces.com/contest/1475/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second


int t(1), n, m, w; vector<int> vec, one, two;
void solve() {
    cin >> n >> m; vec.resize(n);
    for(auto &x:vec) cin >> x;
    one.clear(); two.clear();
    for(auto x:vec) {
        cin >> w;
        if(w==1) one.push_back(x);
        else two.push_back(x);
    }
    sort(one.rbegin(), one.rend());
    sort(two.rbegin(), two.rend());
    ll oneSum = 0, twoSum = accumulate(two.begin(), two.end(), 0ll);
    int l = 0, r = (int)two.size(), ans = 0x3f3f3f3f;
    for(;l<=one.size();l++) {
        while(r>0 && oneSum+twoSum-two[r-1]>=m) twoSum-=two[--r];
        if(oneSum+twoSum>=m) ans = min(ans, 2*r+l);
        if(l!=one.size()) oneSum+=one[l];
    }
    cout << (ans==0x3f3f3f3f? -1:ans) << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}