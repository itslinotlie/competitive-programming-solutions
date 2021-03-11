// 03/10/2021
// https://cses.fi/problemset/task/1084
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

int n, m, k, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k; vector<int> a(n), b(m);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    sort(a.begin(), a.end()); sort(b.begin(), b.end());

    int i = 0;
    for(auto x:b) {
        for(;i<n;i++) {
            if(x-k<=a[i] && a[i]<=x+k) {
                i++; cnt++; break;
            } else if(a[i]>x+k) break;
        }
    }
    cout << cnt << "\n";
}