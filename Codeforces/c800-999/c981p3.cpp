// 11/16/2020
// https://codeforces.com/contest/981/problem/C
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

int n; vector<int> adj[mxn], ans;
void dfs(int u, int pa) {
    int deg = 0;
    for(auto v:adj[u]) {
        if(v!=pa) deg++, dfs(v, u);
    }
    if(deg==0) ans.push_back(u);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1, u, v;i<n;i++) {
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int root(0), cnt(0);
    for (int i=0;i<n;i++) {
        if(adj[i].size()>2) cnt++, root = i;
    }
    if(cnt>1) cout << "No\n";
    else {
        cout << "Yes\n";
        dfs(root, -1);
        cout << ans.size() << "\n";
        for (int i=0;i<ans.size();i++) {
            cout << root + 1 << " " << ans[i] + 1 << "\n";
        }
    }
}