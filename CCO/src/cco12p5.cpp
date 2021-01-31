// 01/31/2021
// https://dmoj.ca/problem/cco12p5
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

int n, x, a[101], b[101], flag;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> x;
        a[x] = 1;
    }
    FOR(i, 100) {
        CLR(b); flag = 1;
        for(int j=0;j<=i;j++) {
            b[(int)(100.0*j/i+0.5)]++;
        }
        for(int j=0;j<=100;j++) {
            if(a[j] && !b[j]) flag = 0;
        }
        if(flag) {
            cout << i << endl;
            return 0;
        }
    } 
}