// 12/21/2020
// https://codeforces.com/contest/1330/problem/B
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
const int mxn = 2e5+5;

int t(1), n, a[mxn], mx, cnt[mxn]; bool vis[mxn]; vector<pii> vec;
bool check() {
    for(int i=1;i<=n-mx;i++) {
        if(!vis[i]) return false;
    } return true;
}
void solve() {
    cin >> n; mx = 0; 
    vec.clear(); CLR(cnt); CLR(vis);
    FOR(i, n) {
        cin >> a[i];
        mx = max(mx, a[i]);
        cnt[a[i]]++;
    }
    int flag = 0, bigFlag = 0;
    FOR(i, mx) {
        if(cnt[i]==0) bigFlag = 1;
        else if(cnt[i]>2) bigFlag = 1;
        else if(i<=n-mx && cnt[i]!=2) bigFlag = 1;
        else if(i>n-mx && cnt[i]>1) bigFlag = 1;
    }
    for(int i=1;i<=n-mx;i++) {
        if(!vis[a[i]]) vis[a[i]] = true;
        else flag = 1;
    }
    if (!bigFlag && !flag && check()) vec.push_back({n-mx, mx});
    CLR(vis); flag = 0;
    for(int i=n;i>mx;i--) {
        if(!vis[a[i]])  vis[a[i]] = true;
        else flag = 1;
    }
    if (!bigFlag && !flag && check() && n-mx!=mx) vec.push_back({mx, n-mx});
    cout << vec.size() << endl;
    while(!vec.empty()) {
        cout << vec.front().F << " " << vec.front().S << endl;
        vec.erase(vec.begin());
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}