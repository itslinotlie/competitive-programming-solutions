// 05/01/2021
// https://codeforces.com/contest/1006/problem/D
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

int n, ans; string a, b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> a >> b;
    REP(i, n/2) {
        map<char, int> mp;
        mp[a[i]]++; mp[a[n-i-1]]++;
        mp[b[i]]++; mp[b[n-i-1]]++;
        if(mp.size()==4) ans+=2;
        else if(mp.size()==3) ans+=1+(a[i]==a[n-i-1]);
        else if(mp.size()==2) ans+=mp[a[i]]!=2;
    }
    if(n%2 && a[n/2]!=b[n/2]) ans++;
    cout << ans << "\n";
}