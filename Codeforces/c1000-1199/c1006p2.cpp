// 05/01/2021
// https://codeforces.com/contest/1006/problem/B
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

int n, k;
bool cmp(pii a, pii b) {
    return a.S < b.S;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; 
    vector<int> a(n); vector<pii> vec(n);
    REP(i, n) {
        cin >> a[i];
        vec[i] = {a[i], i+1};
    } sort(vec.rbegin(), vec.rend());
    sort(vec.begin(), vec.begin()+k, cmp);
    int prv = 0, sum = 0;
    REP(i, k-1) {
        sum+=*max_element(a.begin()+prv, a.begin()+vec[i].S);
        prv = vec[i].S;
    } sum+=*max_element(a.begin()+prv, a.end());
    cout << sum << "\n"; prv = 0;
    REP(i, k-1) {
        cout << vec[i].S-prv << " ";
        prv = vec[i].S;
    } cout << n-prv << "\n";
}