// 11/11/2020
// https://codeforces.com/contest/946/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second

ll a, b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    while(a!=0 && b!=0) {
        if(a>=2*b) a%=2*b;
        else if(b>=2*a) b%=2*a;
        else break;
    }
    cout << a << " " << b << endl;
}