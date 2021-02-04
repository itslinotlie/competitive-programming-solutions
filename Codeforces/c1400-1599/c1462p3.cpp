// 02/04/2021
// https://codeforces.com/contest/1462/problem/C
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


int t(1), x, place, big; deque<int> dq;
void solve() {
    cin >> x; big = 9;
    if(x>45) {cout << "-1\n"; return;}
    while(x>0) {
        if(x-big<0) {
            dq.push_front(x);
            break;
        } else {
            x-=big;
            dq.push_front(big--);
        }
    }
    while(!dq.empty()) {
        cout << dq.front(); dq.pop_front();
    } cout << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}