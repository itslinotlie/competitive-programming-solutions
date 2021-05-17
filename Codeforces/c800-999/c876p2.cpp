// 05/16/2021
// https://codeforces.com/contest/876/problem/B
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
const int mxn = 1e5+5;

int n, k, m, x; vector<int> vec[mxn];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> m;
    REP(i, n) {
        cin >> x;
        vec[x%m].push_back(x);
    }
    REP(i, m) {
        if(vec[i].size()>=k) {
            cout << "Yes\n";
            REP(j, k) cout << vec[i][j] << " ";
            cout << "\n"; return 0;
        }
    }
    cout << "No\n";
}