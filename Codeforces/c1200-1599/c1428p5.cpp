// 11/03/2020
// https://codeforces.com/contest/1428/problem/E
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0) {
        if(b%2) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
const int m4i[4]={-1, 0, 1, 0}, m4j[4]={0, 1, 0, -1};
const int m8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, m8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
const int mxn = 1e5+5;
typedef pair<ll, ll> orz;
typedef pair<ll, orz> lll;

int n, k; ll cost, x; priority_queue<lll> pq;
ll sq(ll chad) {
    return chad*chad;
}
ll val(ll len, ll nums) {
    ll unit = len/nums;
    ll extra = len - unit*nums;
    return (nums-extra)*sq(unit) + extra*sq(unit+1);
}
int main() { //kinda reminds me of the 1D1D dp trick with the quadrilaterial equality, but this is very orz
    cin >> n >> k;
    REP(i, n) {
        cin >> x;
        cost+=sq(x);
        pq.push(lll(val(x, 1)-val(x, 2), orz(x, 2)));
    }
    REP(i, k-n) {
        cost-=pq.top().first;
        int a = pq.top().second.first, b = pq.top().second.second;
        pq.pop();
        pq.push(lll(val(a, b)-val(a, b+1), orz(a, b+1)));
    }
    cout << cost << endl;
}