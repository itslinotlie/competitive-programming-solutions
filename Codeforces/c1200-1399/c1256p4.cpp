// 02/28/2021
// https://codeforces.com/contest/1256/problem/D
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

int t(1), n, idx; ll k; string s; vector<int> vec;
void solve() {
    cin >> n >> k >> s; vec.clear(); idx = 0;
    REP(i, n) {
        if(s[i]=='0') vec.push_back(i);
    }
    while(k>=0) {
        if(idx>=vec.size()) break;
        int pos = vec[idx];
        if((pos-idx)<=k) {
            k-=(pos-idx);
            swap(s[pos], s[idx++]);
        } else {
            swap(s[pos], s[max(idx, (int)(pos-k))]);
            break;
        }
    }
    cout << s << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}