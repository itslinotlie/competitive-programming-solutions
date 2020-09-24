// 08/19/2020
// https://dmoj.ca/problem/mwc15c3p1
#include<bits/stdc++.h>
using namespace std;
typedef pair<string, int> pii;

int n, d, p, x; string s; map<string, int> mp;
bool cmp(pii a, pii b) {
    return a.second > b.second;
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s >> x;
        mp[s] = x;
    }
    cin >> d;
    for (int i=1;i<=n*d;i++) {
        cin >> s >> x;
        mp[s]+=x;
    }
    cin >> p; vector<pii> vec;
    copy(mp.begin(), mp.end(), back_inserter<vector<pii>>(vec));
    sort(vec.begin(), vec.end(), cmp);
    for (auto x:vec) {
        if(!--p) cout<<x.first<<endl;
    }
}