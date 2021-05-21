// 05/20/2021
// https://codeforces.com/contest/1133/problem/A
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

int h1, m1, h2, m2, t1, t2, t3;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    t1 = 60*h1+m1; t2 = 60*h2+m2;
    t3 = (t1+t2)/2;
    printf("%02d:%02d\n", t3/60, t3%60);
}