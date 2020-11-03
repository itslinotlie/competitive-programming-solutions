// 10/19/2020
// https://codeforces.com/contest/879/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
const int mxn = 505;

int n, cnt; ll k, maxi, tmp, a[mxn];;
int main() {
    cin >> n >> k;
    cin >> a[1]; maxi = a[1];
    for (int i=2;i<=n;i++) {
        cin >> a[i];
        if(maxi>a[i]) cnt++;
        else {
            if(cnt>=k) {cout << maxi << endl; return 0;}
            maxi = a[i]; cnt = 1;
        }
    }
    cout << maxi << endl;
}