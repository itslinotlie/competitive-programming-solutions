// 05/08/2021
// https://dmoj.ca/problem/coci15c2p4
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int base = 131;

int n, ans; string s; map<ll, int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> s; ll pre = 0, suf = 0, pw = 1; int best = 0;
        REP(j, s.size()) {
            int m = s.size();
            pre = pre*base + s[j];
            suf = s[m-j-1]*pw + suf; pw*=base;
            if(pre==suf) best = max(best, mp[pre]);
        }
        ans = max(ans, best+1); mp[pre] = best+1;
    }
    cout << ans << endl;
}