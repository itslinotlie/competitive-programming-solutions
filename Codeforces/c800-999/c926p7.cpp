// 05/15/2021
// https://codeforces.com/contest/926/problem/G
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

int n, x, e, o, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    FOR(i, n) {
        cin >> x;
        if(x%2) o++;
        else e++;
    }
    int mini = min(e, o); e-=mini; o-=mini;
    ans+=mini;
    ans+=o/3;
    cout << ans << "\n";
}