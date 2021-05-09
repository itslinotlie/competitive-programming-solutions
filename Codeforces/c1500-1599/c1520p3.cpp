// 05/09/2021
// https://codeforces.com/contest/1520/problem/C
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

int t(1), n;
void solve() {
    cin >> n;
    if(n==2) {cout << "-1\n"; return;}
    int row = 1, col = 1; int odd = 1, even = 2;
    while(row<=n) {
        while(col<=n) {
            if(odd<=n*n) {cout << odd << " "; odd+=2;}
            else {cout << even << " "; even+=2;}
            col++;
        } cout << "\n";
        row++; col = 1;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}