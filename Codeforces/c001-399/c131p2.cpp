// 03/05/2021
// https://codeforces.com/contest/131/problem/B
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

int n, x; map<int, ll> mp; ll cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> x; mp[x]++;
    }
    for(int i=1;i<=10;i++) {
        cnt+=(mp[i]*mp[-i]);
    } cnt+=mp[0]*(mp[0]-1)/2;
    cout << cnt << endl;
}