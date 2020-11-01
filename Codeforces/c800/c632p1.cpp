// 10/26/2020
// https://codeforces.com/contest/632/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second

int n, p; stack<int> stk; string s; ll x; vector<ll> vec;
int main() {
    cin >> n >> p;
    FOR(i, n) {
        cin >> s;
        stk.push(s=="half"? 1:0);
    }
    vec.push_back(stk.top()? 2:1); stk.pop();
    while(!stk.empty()) {
        int k = stk.top(); stk.pop();
        vec.push_back(k? vec.back()*2:vec.back()*2+1);
    }
    sort(vec.rbegin(), vec.rend());
    while(!vec.empty()) {
        if(vec.front()%2) x+=p/2;
        x+=vec.front()/2*p;
        vec.erase(vec.begin());
    }
    cout << x << "\n";

}