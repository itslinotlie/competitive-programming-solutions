// 05/19/2021
// https://codeforces.com/contest/1399/problem/D
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
const int mxn = 2e5+5;

int t(1), n, a[mxn]; string s;
void solve() {
    cin >> n >> s; 
    vector<int> zero, one;
    REP(i, n) {
        int x = zero.size() + one.size();
        if(s[i]=='0') {
            if(one.empty()) zero.push_back(x);
            else {
                x = one.back(); one.pop_back();
                zero.push_back(x);
            }
        } else {
            if(zero.empty()) one.push_back(x);
            else {
                x = zero.back(); zero.pop_back();
                one.push_back(x);
            }
        }
        a[i] = x;
    }
    cout << zero.size() + one.size() << "\n";
    REP(i, n) cout << a[i]+1 << " "; cout << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}