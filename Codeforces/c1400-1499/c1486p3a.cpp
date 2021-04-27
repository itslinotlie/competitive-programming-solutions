// 04/02/2021
// https://codeforces.com/contest/1486/problem/C1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}

int n, x, prv;
int query(int l, int r) {
    if(l>=r) return -1;
    cout << "? " << l+1 << " " << r+1 << endl;
    cin >> x; return x-1;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    int l = 0, r = n;
    while(r-l>1) {
        int mid = (l+r)/2;
        int maxi = query(l, r-1);
        if(maxi<mid) {
            if(query(l, mid-1)==maxi) r = mid;
            else l = mid;
        } else {
            if(query(mid, r-1)==maxi) l = mid;
            else r = mid;
        }
    }
    cout  << "! " << r  << endl;
}