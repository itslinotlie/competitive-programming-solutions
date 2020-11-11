// 11/09/2020
// https://codeforces.com/contest/1256/problem/B
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
const int mxn = 105;

int t, n, x; vector<int> a;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n; x = 0; a.resize(n);
        for(auto &t:a) cin >> t, t--;
        while(x<n) {
            int id = min_element(a.begin()+x, a.end())-a.begin();
            int nxt = a[id];
            a.erase(a.begin()+id);
            a.insert(a.begin()+x, nxt);
            if(x==id) x = id+1;
            else x = id;
        }
        REP(i, n) cout << a[i]+1 << " "; cout << endl;
    }
}