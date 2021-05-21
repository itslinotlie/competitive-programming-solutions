// 05/20/2021
// https://codeforces.com/contest/1133/problem/B
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

int n, k, x, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; vector<int> mod(k);
    REP(i, n) {
        cin >> x; x%=k;
        mod[x]++;
    }
    ans = mod[0]/2 + (k%2? 0:mod[k/2]/2);
    for(int i=1;i<(k+1)/2;i++) ans+=min(mod[i], mod[k-i]);
    cout << ans*2 << "\n";
}