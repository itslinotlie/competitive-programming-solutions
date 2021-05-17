// 05/16/2021
// https://codeforces.com/contest/875/problem/A
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

int n; vector<int> ans;
int sum(int x) {
    int ret = 0;
    while(x>0) {
        ret+=x%10; x/=10;
    } return ret;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=max(1, n-1000);i<=n;i++) {
        if(sum(i)+i==n) ans.push_back(i);
    } cout << ans.size() << "\n";
    for(auto x:ans) cout << x << " "; cout << "\n";
}