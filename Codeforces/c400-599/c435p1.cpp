// 10/19/2020
// https://codeforces.com/contest/435/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int n, m, cnt, x;
int main() {
    cin >> n >> m; x = m;
    for (int i=1,k;i<=n;i++) {
        cin >> k;
        if(x-k>=0) x-=k;
        else {
            cnt++; x=m-k;
        }
    }
    cout << cnt + 1 << endl;
}