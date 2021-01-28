// 12/20/2020
// https://codeforces.com/contest/435/problem/B
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


string s; int n, k, pos;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s >> k; n = s.size();
    for (int i=0;i<n;i++) {
        char c = s[i]; pos = i;
        for (int j=i+1;j<n;j++) {
            if(s[j]>c && j-i<=k) {
                c = s[j]; pos = j;
            }
        }
        k-=(pos-i);
        for (int j=pos-1;j>=i;j--) {
            s[j+1] = s[j];
        } s[i] = c;
    }
    cout << s << endl;
}