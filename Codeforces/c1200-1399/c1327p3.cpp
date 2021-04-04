// 03/12/2021
// https://codeforces.com/contest/1327/problem/C
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

int n, m, k, r, c;
string fun(char c) {
    string ret = "";
    FOR(i, m-1) ret+=string(1, c);
    return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    FOR(i, k) cin >> r >> c;
    FOR(i, k) cin >> r >> c;
    cout << (n-1) + (m-1) + n*(m-1) + (n-1) << endl;
    FOR(i, n-1) cout << "U";
    FOR(i, m-1) cout << "L";
    FOR(i, n) {
        if(i!=1) cout << "D";
        if(i%2) cout << fun('R');
        else cout << fun('L');
    } cout << endl;
}