// 05/20/2021
// https://codeforces.com/contest/1133/problem/C
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

int n, cur, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; vector<int> vec(n);
    for(auto &x:vec) cin >> x;
    sort(vec.begin(), vec.end());
    int lft = 0, rit = 0;
    for(;rit<n;rit++) {
        while(vec[rit]-vec[lft]>5) lft++;
        ans = max(ans, rit-lft+1);
    }
    cout << ans << "\n";
}