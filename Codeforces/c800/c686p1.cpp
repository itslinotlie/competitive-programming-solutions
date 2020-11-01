// 10/19/2020
// https://codeforces.com/contest/686/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int n, ans; long long x; char c;
int main() {
    cin >> n >> x;
    for (int i=1,k;i<=n;i++) {
        cin >> c >> k;
        if(c=='+') x+=k;
        else {
            if(x-k<0) ans++;
            else x-=k;
        }
    }
    cout << x << " " << ans << endl;
}