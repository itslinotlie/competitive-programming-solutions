// 11/03/2020
// https://codeforces.com/contest/522/problem/B
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
const int mxn = 2e5+5;

int n, LSUM, x, y, h1, h2; pii a[mxn];
int main() {
    cin >> n;
    FOR(i, n) {
        cin >> x >> y;
        a[i] = {x, y};
        LSUM+=x;
        if(y>h1) h2 = h1, h1 = y;
        else if(y>h2) h2 = y;
    }
    FOR(i, n) {
        cout << (LSUM-a[i].first)*(a[i].second==h1? h2:h1) << " ";
    } cout << endl;
}