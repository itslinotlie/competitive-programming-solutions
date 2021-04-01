// 02/04/2021
// https://codeforces.com/contest/1462/problem/D
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
const int mxn = 3e3+3;

ll t(1), n, sum; vector<int> vec;
void solve() {
    cin >> n; sum = 0; vec.resize(n);
    for(auto &x:vec) {
        cin >> x;
        sum+=x;
    }
    for(int i=n;i>=1;i--) {
        if(sum%i==0) {
            ll target = sum/i, cur = 0;
            bool flag = true;
            for(int j=0;j<n && flag;j++) {
                cur+=vec[j];
                if(cur>target) flag = false;
                else if(cur==target) cur = 0;
            }
            if(flag) {
                cout << n-i << endl;
                break;
            }
        }
    }



}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}