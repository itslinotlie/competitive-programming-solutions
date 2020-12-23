// 11/15/2020
// https://codeforces.com/contest/1038/problem/B
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


int n, x;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; x = (n%2==0? n/2:(n+1)/2);
    if(n<=2) return 0 * puts("No");
    cout << "Yes\n";
    cout << 1 << " " << x << "\n";
    cout << n-1 << " ";
    FOR(i, n) {
        if(i==x) continue;
        cout << i << " ";
    } cout << "\n";
}