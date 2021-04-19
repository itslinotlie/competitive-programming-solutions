// 03/26/2021
// https://codeforces.com/contest/1368/problem/B
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

ll n, k, i; string s = "codeforces"; vector<ll> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, s.size()) vec.push_back(1);
    k = 1;
    while(k<n) {
        k = k/vec[i]*(vec[i]+1);
        vec[i++]++;
        i%=s.size();
    }
    REP(i, s.size()) REP(j, vec[i]) cout << s[i];
    cout << "\n";
}