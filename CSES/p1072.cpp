// 02/22/2021
// https://cses.fi/problemset/task/1072
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

int n;
int main() { //O(1) math sols >:(((
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++) {
        //total possible / 2 because double count minus
        //knight positioning if you think of it as a 2x3 box --> x4 because flip and rotate
        cout << 1LL*i*i*(i*i-1)/2 - 1LL*(i-1)*(i-2)*4 << endl;
    }
}