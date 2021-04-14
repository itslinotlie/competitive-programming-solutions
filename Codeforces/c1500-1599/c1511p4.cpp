// 04/12/2021
// https://codeforces.com/contest/1511/problem/D
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

int n, k; string ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    if(k==1) {
        char c = 'a';
        ans+=c; ans+=c;
    } else {
        for(int i=0;i<k;i++) {
            char x = 'a'+i;
            ans+=x;
            for(int j=i+1;j<k;j++) {
                char x = 'a'+i;
                char y = 'a'+j;
                ans+=x;
                ans+=y;
            }
        }
    }
    while(ans.length()<n) ans+=ans;
    cout << ans.substr(0, n) << endl;
}