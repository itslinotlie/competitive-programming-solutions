// 10/12/2020
// https://codeforces.com/contest/478/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second

int sum, x;
int main() {
    FOR(i, 5) {
        cin >> x;
        sum+=x;
    }
    if(sum==0) puts("-1");
    else if(sum%5==0) cout << sum/5 << endl;
    else puts("-1");
}