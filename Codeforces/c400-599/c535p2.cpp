// 11/07/2020
// https://codeforces.com/contest/535/problem/B
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

int n, len, ans;
int main() {
    cin >> n;
    while(n) {
        if(n%10==7) ans+=(1<<len);
        n/=10; len++;
    }
    for (int i=1;i<len;i++) ans+=(1<<i);
    cout << ans+1 << endl;
}