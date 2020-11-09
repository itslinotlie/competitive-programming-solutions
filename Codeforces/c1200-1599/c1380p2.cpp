// 11/07/2020
// https://codeforces.com/contest/1380/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5+5;

int t, n, a[3]; string s; char c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> s; n = s.size();
        memset(a, 0, sizeof(a));
        for (int i=0;i<n;i++) {
            if(s[i]=='R') a[0]++;
            if(s[i]=='P') a[1]++;
            if(s[i]=='S') a[2]++;
        }
        if(a[0]>=max(a[1], a[2])) c = 'P';
        if(a[1]>=max(a[0], a[2])) c = 'S';
        if(a[2]>=max(a[1], a[0])) c = 'R';
        string ans(n, c);
        cout << ans << endl;
    }
}