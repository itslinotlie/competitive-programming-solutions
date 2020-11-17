// 10/18/2020
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define FOR(i, n) for(int i=1;i<=n;i++)
#define REP(i, n) for(int i=0;i<n;i++)
#define F first
#define S second

vector<int> kick, start; ll ans; 
void work() {
    string s; ans = 0;
    cin >> s;
    kick.clear(); start.clear();
    for (int i=0;i+4<s.length();i++) {
        if(s.substr(i, 4)=="KICK") kick.push_back(i);
        if(s.substr(i, 5)=="START") start.push_back(i);
    }
    for (auto x:kick) {
        ll cnt = 0;
        for (auto y:start) {
            if(x<y) cnt++;
        }
        ans+=cnt;
    }
    cout << ans << "\n";
}
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    for(int t=1;t<=T;t++) {
        cout << "Case #" << t << ": ";
        work();
    }
}