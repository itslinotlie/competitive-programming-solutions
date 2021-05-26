// 08/15/2020
// https://dmoj.ca/problem/tle15p2
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;

int n, m, t; vector<pii> vec; map<ll, int> mp; ll ans = 1e18;
int main() {
    scanf("%d%d%d", &n, &m, &t); mp[0] = n;
    for (int i=0,x,y;i<m;i++) {
        scanf("%d%d", &x, &y); vec.push_back({x, y});
    }
    sort(vec.begin(), vec.end());
    for(pii cur:vec) {
        auto it = mp.upper_bound((ll)cur.first);
        if(it!=mp.begin()) it--;
        if(it->first + t <= cur.first) {
            ans = min(ans, it->first);
        }
        ll st = max((ll)cur.first, it->first), ed = st + cur.second;
        it->second--; 
        if(it->second==0) mp.erase(it);
        mp[ed]++;
    }
    cout << min(ans, mp.begin()->first) << endl;
}