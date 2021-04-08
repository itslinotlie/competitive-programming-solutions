// 02/25/2021
// https://codeforces.com/contest/1169/problem/B
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

int n, m, u, v, all; vector<pii> adj;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    FOR(i, m) {
        cin >> u >> v;
        u--; v--;
        adj.push_back({u, v});
    }  vector<int> x = {adj[0].F, adj[0].S};
    for(int a:x) {
        vector<int> arr(n); all = 0;
        for(pii b:adj) {
            if(b.F!=a && b.S!=a) {
                arr[b.F]++; arr[b.S]++; all++;
            }
        }
        if(*max_element(all(arr))==all) {
            cout << "YES\n"; return 0;
        }
    }
    cout << "NO\n";
}