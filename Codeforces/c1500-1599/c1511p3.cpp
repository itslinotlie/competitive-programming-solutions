// 04/12/2021
// https://codeforces.com/contest/1511/problem/C
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
const int mxn = 3e5+5;

int n, q, x, a[mxn], color[55];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    memset(color, 0x3f, sizeof(color));
    cin >> n >> q;
    FOR(i, n) {
        cin >> x;
        color[x] = min(color[x], i);
    }
    FOR(i, q) {
        cin >> x;
        int pos = color[x];
        cout << pos << " ";
        FOR(j, 55) {
            if(color[j]<pos) color[j]++;
        }
        color[x] = 1;
    }
    cout << "\n";
}