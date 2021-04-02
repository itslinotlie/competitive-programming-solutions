// 03/13/2021
// https://codeforces.com/contest/991/problem/B
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

int n, x, cnt; map<int, int> mp; double sum, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; sum = 4.5*n;
    FOR(i, n) {cin >> x; ans+=x; mp[x]++;}
    while(ans<sum) {
        for(auto &a:mp) {
            if(a.S>0) {ans-=a.F; ans+=5; a.S--; cnt++; break;}
        }
    }
    cout << cnt << endl;
}