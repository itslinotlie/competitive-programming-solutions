// 09/01/2020
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6+5;
typedef long long ll;

int n; ll k, sum, w[mxn]; 
vector<int> adj[mxn], ans; bool vis[mxn];
void dfs(int u) {
    if(vis[u] || w[u]>2*k) return;
    vis[u] = true; ans.push_back(u); sum+=w[u];
    for (int v:adj[u]) {
        if(!vis[v]) dfs(v);
    }
}
int main() {
    scanf("%d%lld", &n, &k);
    for (int i=1;i<=n;i++) scanf("%lld", &w[i]), sum+=w[i];
    if(sum<k) return 0 * puts("-1");
    for (int i=1, a, b;i<n;i++) {
        scanf("%d%d", &a, &b);
        adj[a].push_back(b); adj[b].push_back(a);
    }
    for (int i=1;i<=n;i++) {
        if(w[i]>2*k) continue;
        if(!vis[i]) {
            sum = 0; ans.clear(); dfs(i);
            if(sum>=k) {
                int pos = ans.size()-1;
                while(sum>2*k) sum-=w[ans[pos--]];
                if(sum>=k) {
                    cout<<pos+1<<"\n";
                    for (int j=0;j<=pos;j++) cout<<ans[j]<<" "; cout<<endl;
                    return 0;
                }
            }
        }
    }
    puts("-1");
}