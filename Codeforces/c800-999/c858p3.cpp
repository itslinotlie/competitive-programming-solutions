// 05/10/2021
// https://codeforces.com/contest/858/problem/C
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

int n, idx; string s; char c[5] = {'a', 'e', 'i', 'o', 'u'}; vector<int> vec;
bool fun(int x) {
    REP(t, 5) {
        for(int i=x-2;i<=x;i++) {
            if(s[i]==c[t]) return false;
        }
    }
    return !(s[x-2]==s[x-1] && s[x-1]==s[x]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    for(int i=2;i<n;i++) {
        if(fun(i)) vec.push_back(i++);
    }
    REP(i, n) {
        if(idx<vec.size() && vec[idx]==i) {cout << " "; idx++;}
        cout << s[i];
    } cout << "\n";
}