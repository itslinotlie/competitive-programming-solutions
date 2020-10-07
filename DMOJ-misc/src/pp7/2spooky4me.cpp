// 10/04/2020
// https://dmoj.ca/problem/2spooky4me
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int n, l, s; ll a, b, x, ans, cur, prv; vector<pii> vec;
int main() {
    scanf("%d%d%d", &n, &l, &s);
    for (int i=1;i<=n;i++) {
        scanf("%lld%lld%lld", &a, &b, &x);
        vec.push_back({a, x}); vec.push_back({b+1, -x});
    }
    vec.push_back({1, 0}); vec.push_back({1+l, 0});
    sort(vec.begin(), vec.end());
    prv = 1;
    for (auto v:vec) {
        if(cur<s) ans+=v.first-prv;
        cur+=v.second;
        prv = v.first;
    }
    printf("%lld\n", ans);
}