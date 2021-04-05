// 04/04/2021
// https://codeforces.com/contest/121/problem/A
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

ll l, r, x, ans; queue<ll> qu;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> l >> r; x = l;
    qu.push(4); qu.push(7);
    while(x<=r) {
        if(x<=qu.front()) {
            ans+=qu.front(); x++;
        } else {
            qu.push(qu.front()*10+4);
            qu.push(qu.front()*10+7);
            qu.pop();
        }
    } cout << ans << endl;
}