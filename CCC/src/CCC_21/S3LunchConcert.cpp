// 02/17/2021
// https://dmoj.ca/problem/ccc21s3
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pii;
const int mxn = 2e5+5, MM = 1e9;

struct e{ll p, w, d;};
int n; e a[mxn];
ll fun(int x) {
    ll ret = 0;
    for(int i=0;i<n;i++) {
        ll dis = max(0LL, abs(x-a[i].p)-a[i].d);
        ret+=dis*a[i].w;
    }
    return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    ll lo = 0x3f3f3f3f3f3f3f3f, hi = 0, ans = 0x3f3f3f3f3f3f3f3f;
    for(int i=0;i<n;i++) {
        cin >> a[i].p >> a[i].w >> a[i].d;
        lo = min(lo, a[i].p);
        hi = max(hi, a[i].p);
    }
    for(int t=0;t<10;t++) {
        int amt = 10;
        int gap = (hi-lo)/amt;
        if(gap==0) break;
        vector<pii> vec;
        for(int i=lo;i<=hi;i+=gap) vec.push_back({i, fun(i)});
        stack<pii> mn, mx;
        ll mini, maxi;
        bool flag = true;
        for(auto x:vec) {
            if(!mn.empty() && mn.top().second<x.second) {
                mini = x.first;
                flag = false;
                break;
            }
            mn.push(x);
        }
        if(flag) break;
        reverse(vec.begin(), vec.end());
        for(auto x:vec) {
            if(!mx.empty() && mx.top().second<x.second) {
                maxi = x.first;
                break;
            } 
            mx.push(x);
        }
        lo = min(mini, maxi); hi = max(mini, maxi);
    }
    for(int i=lo;i<=hi;i++) ans = min(ans, fun(i));
    cout << ans << endl;
}