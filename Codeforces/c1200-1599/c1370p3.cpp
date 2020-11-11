// 11/10/2020
// https://codeforces.com/contest/1370/problem/C
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

int t, n, x, b;
bool prime(int val) {
    for (int i=2;i<=sqrt(val);i++) {
        if(val%i==0) return false;
    } return true;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n;
        b = n==1;
        if(n>2 && n%2==0) {
            if(__builtin_popcount(n)==1) b = 1;
            else if(n%4 && prime(n/2)) b = 1;
        }
        puts(b? "FastestFinger":"Ashishgup");
    }
}