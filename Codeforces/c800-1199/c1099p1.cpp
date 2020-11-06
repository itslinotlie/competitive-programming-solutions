// 10/11/2020
// https://codeforces.com/contest/1099/problem/A
#include<bits/stdc++.h>
using namespace std;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
typedef pair<int, int> pii;
#define f first
#define s second

int w, h; pii a, b;
int main() {
    cin >> w >> h;
    cin >> a.f >> a.s;
    cin >> b.f >> b.s;
    RFOR(i, h) {
        w+=i;
        if(i==a.s) w-=a.f;
        if(i==b.s) w-=b.f;
        w = max(w, 0);
    }
    cout << w << "\n";
}