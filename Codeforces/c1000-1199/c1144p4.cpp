// 11/09/2020
// https://codeforces.com/contest/1144/problem/D
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
const int mxn = 2e5+5;

int n, a[mxn], frq[mxn+1], maxi, x, cnt, ans, id;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) cin >> a[i], frq[a[i]]++;
    REP(i, mxn) {
        if(frq[i]>maxi) {
            maxi = frq[i]; cnt = i;
        }
    }
    cout << n - maxi << endl;
    FOR(i, n) if(a[i]==cnt) {id = i; break;}
    for (int i=1;i<=n;i++) {
        if(a[min(n, id+i)]!=cnt) {
            if(a[min(n, id+i)]<cnt) cout << 1 << " " << min(n, id+i) << " " << id+i-1 << endl;
            else cout << 2 << " " << min(n, id+i) << " " << id+i-1 << endl;
            a[min(n, id+i)] = cnt;
        }
        if(a[max(1, id-i)]!=cnt) {
            if(a[max(1, id-i)]<cnt) cout << 1 << " " << max(1, id-i) << " " << id-i+1 << endl;
            else cout << 2 << " " << max(1, id-i) << " " << id-i+1 << endl;
            a[max(1, id-i)] = cnt;
        }
    }
}