// 10/12/2020
// https://codeforces.com/contest/825/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second

int n, cnt; string S, ans;
int main() {
    cin >> n >> S;
    for (int i=0;i<S.size();i++) {
        if(S[i]=='1') cnt++;
        else {
            ans+=to_string(cnt); cnt = 0;
        }
    }
    ans+=to_string(cnt);
    cout << ans << "\n";
}