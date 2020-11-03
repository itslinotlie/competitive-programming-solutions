// 10/27/2020
// https://dmoj.ca/problem/ccc01s3
#include<bits/stdc++.h>
using namespace std;

int st, lo[26], in[26], val; vector<int> adj[26]; string s; vector<pair<char, char>> ans; bool vis[26];
void dfs(int x, int pa) {
    lo[x] = in[x] = val++; vis[x] = true;
    for(int u:adj[x]) {
        if(u==pa) continue;
        if(vis[u]) lo[x] = min(lo[x], in[u]);
        else {
            dfs(u, x);
            if(lo[u]>in[x]) ans.push_back({'A'+u, 'A'+x});
            lo[x] = min(lo[x], lo[u]);
        }
    }
}
int main() {
    for(;;) {
        cin >> s;
        if(s=="**") break;
        int u = s[0]-'A', v = s[1]-'A';
        adj[u].push_back(v); st = u;
        adj[v].push_back(u);
    }
    dfs(st, -1);
    for(auto x:ans) cout << x.first<<x.second << "\n";
    printf("There are %lu disconnecting roads.\n", ans.size());
}