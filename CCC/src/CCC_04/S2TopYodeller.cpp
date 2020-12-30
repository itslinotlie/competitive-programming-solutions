// 12/29/2020
// https://dmoj.ca/problem/ccc04s2
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


int n, k, a; vector<pii> vec; vector<int> ans = {0};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; vec.resize(n);
    while(k--) {
        REP(i, n) {
            cin >> a;
            vec[i].F+=a;
        }
        for(auto &x:vec) {
            int cnt = 1;
            for(auto &y:vec) {
                if(y.F>x.F) cnt++;
            }
            x.S = max(x.S, cnt);
        }
    }
    for(int i=1;i<n;i++) {
        if(vec[i].F>vec[ans[0]].F) {
            ans.clear();
            ans.push_back(i);
        }
        else if(vec[i].F==vec[ans[0]].F) {
            ans.push_back(i);
        }
    }
    for(auto x:ans) {
        cout << "Yodeller " << x+1 << " is the TopYodeller: score " << vec[x].F << ", worst rank " << vec[x].S << endl;
    }
}