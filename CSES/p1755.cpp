// 02/22/2021
// https://cses.fi/problemset/task/1755
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}

int n; string s, ans; map<char, int> mp; char c; bool flag = false;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    REP(i, n) mp[s[i]]++;
    for(auto x:mp) {
        if(x.S%2) {
            if(!flag) {
                c = x.F; flag = true;
            } else {
                cout << "NO SOLUTION\n"; return 0;
            }
        }
        for(int i=1;i<=x.S/2;i++) ans+=x.F;
    }
    cout << ans; reverse(ans.begin(), ans.end());
    if(flag) cout << c;
    cout << ans << "\n";
}