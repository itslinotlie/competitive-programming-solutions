// 11/19/2020
// https://codeforces.com/contest/1250/problem/F
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


int n, x = 0x3f3f3f3f;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++) {
        if(n%i==0) x = min(x, 2*i + 2*n/i);
    }
    cout << x << "\n";
}