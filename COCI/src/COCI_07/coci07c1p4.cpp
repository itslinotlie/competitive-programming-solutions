// 09/03/2020
// https://dmoj.ca/problem/coci07c1p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 205, MOD = 1e5;
typedef long long ll;

int n; string s; bool big = false, vis[mxn][mxn]; ll dp[mxn][mxn];
ll val(char l, char r) {
    switch(l) {
        case '{': return (r=='}' || r=='?');
        case '(': return (r==')' || r=='?');
        case '[': return (r==']' || r=='?');
        case '?': return (r=='?')? 3:((r==')' || r==']' || r=='}')? 1:0);
        default: return 0;
    }
}
ll fun(int l, int r) {
    if(l==r) return 0;
    if(l>r) return 1;
    if(vis[l][r]) return dp[l][r];

    ll sum = 0;
    for (int k=l+1;k<=r;k++) {
        sum += val(s[l], s[k])*fun(l+1, k-1)*fun(k+1, r);
	    if(l==0 && r==n-1 && sum>=MOD) big = true;
	    sum %= MOD;
    }
    vis[l][r] = true;
    return dp[l][r] = sum;
}
int main() {
    cin >> n >> s;
    ll x = fun(0, n-1);
    if(big) printf("%05lld\n", x);
    else printf("%lld\n", x);
}