// 11/04/2020
// https://codeforces.com/contest/888/problem/C
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
const int mxn = 1e5+5;

int n; string s;
bool fun(int x) {
    int og[26]; bool vis[26];
    CLR(og); memset(vis, false, sizeof(vis));
    for (int i=0;i<x;i++) og[s[i]-'a']++, vis[s[i]-'a'] = true;
    for (int i=x;i<n;i++) {
        og[s[i-x]-'a']--; og[s[i]-'a']++;
        if(og[s[i-x]-'a']<=0) vis[s[i-x]-'a'] = false;
    }
    for (int i=0;i<26;i++) {
        if(vis[i]) return true;
    } return false;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s; n = s.size();
    int lo = 1, hi = n;
    while(lo<=hi) {
        int md = (lo+hi)/2;
        if(fun(md)) hi = md - 1;
        else lo = md + 1;
    }
    cout << lo << endl;
}