// 10/27/2020
// https://codeforces.com/contest/1285/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int t, n, k, x, y;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k;
        x = n-(k-1); //odd
        y = n-2*(k-1); //even
        if(!((x>0 && x%2) || (y>0 && y%2==0))) puts("NO");
        else {
            puts("YES");
            if(x && x%2) {
                for (int i=1;i<k;i++) cout << 1 << " "; cout << n-k+1 << endl;
            } else {
                for (int i=1;i<k;i++) cout << 2 << " "; cout << n-2*k+2 << endl;
            }
        }
    }
}