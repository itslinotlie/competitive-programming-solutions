// 04/26/2021
// https://codeforces.com/contest/1493/problem/B
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

int t(1), h, m, H, M; string s;
vector<int> g = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int fun(int x) {
    string s = to_string(x), ans = "";
    if(s.size()==1) s = "0"+s;
    for(int i=1;i>=0;i--) {
        if(g[s[i]-'0']==-1) return 0x3f3f3f3f;
        ans+=char(g[s[i]-'0']+'0');
    }
    return stoi(ans);
}
string print(int x) {
    string ans = to_string(x);
    if(x<10) ans = "0"+ans;
    return ans;
}
void solve() {
    cin >> h >> m >> s;
    H = (s[0]-'0')*10 + s[1]-'0';
    M = (s[3]-'0')*10 + s[4]-'0';
    while(true) {
        if(M==m) {H++; M = 0;}
        if(H==h) H = 0;
        if(fun(M)<h && fun(H)<m) {
            cout << print(H) << ":" << print(M) << "\n";
            break;
        }
        M++;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    for (int i=1;i<=t;i++) {
        solve();
    }
}