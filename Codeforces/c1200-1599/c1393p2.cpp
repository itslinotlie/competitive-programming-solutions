// 11/04/2020
// https://codeforces.com/contest/1393/problem/B
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
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 1e5+5;

int n, x, q, cnt[mxn], cnt2, cnt4; char c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    REP(i, n) {
        cin >> x;
        cnt2-=cnt[x]/2; cnt4-=cnt[x]/4;
        cnt[x]++;
        cnt2+=cnt[x]/2; cnt4+=cnt[x]/4;
    }
    cin >> q;
    REP(i, q) {
        cin >> c >> x;
        cnt2-=cnt[x]/2; cnt4-=cnt[x]/4;
        cnt[x]+=c=='+'? 1:-1;
        cnt2+=cnt[x]/2; cnt4+=cnt[x]/4;
        puts(cnt4>=1 && cnt2>=4? "YES":"NO");
    }
}