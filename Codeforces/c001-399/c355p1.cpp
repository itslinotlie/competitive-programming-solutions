// 12/25/2020
// https://codeforces.com/contest/355/problem/A
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


int n, k;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    if(n!=1 && k==0) {
        cout << "No solution\n";
        return 0;
    }
    cout << k;
    for(int i=1;i<n;i++) cout << 0; cout << endl;
}