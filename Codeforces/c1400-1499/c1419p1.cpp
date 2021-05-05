// 09/19/2020
// https://codeforces.com/contest/1419/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5;

int t, n, a[mxn]; string s; bool vis[mxn]; vector<int> o, e;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> s; o.clear(); e.clear();
        memset(a, 0, sizeof(a)); memset(vis, false, sizeof(vis));
        for (int i=1;i<=s.size();i++) {
            if((s[i-1]-'0')%2) a[i] = 1;
            if(i%2) { //set to true if its their optimal play
                if(a[i]%2==0) vis[i] = true;
                o.push_back(i);
            } else {
                if(a[i]%2) vis[i] = true;
                e.push_back(i);
            }
        }
        for (int i=1;i<n;i++) {
            bool flag = true;
            if(i%2) {
                for (auto j=o.begin();j<o.end();j++) {
                    if(vis[*j] && flag) {
                        o.erase(j);
                        flag = false;
                    }
                }
                if(flag) o.erase(o.begin());
            } else {
                for (auto j=e.begin();j<e.end();j++) {
                    if(vis[*j] && flag) {
                        e.erase(j);
                        flag = false;
                    }
                }
                if(flag) e.erase(e.begin());
            }
        }
        int x = o.empty()? e.front():o.front();
        a[x]%2? cout<<1<<endl:cout<<2<<endl;
    }
}